import rclpy
from rclpy.node import Node
from rosbot_msgs.msg import Coordinate
from rosbot_msgs.msg import ForwardMsg

import numpy as np

# Joint links
l0 = 0.05 + 0.0654868 + 0.0338648 + 0.0772047  # arm base height wrt base_link
l1 = 0.130
l2 = 0.130
l3 = 0.055
tool_link = 0.117
lengths = [l0, l1, l2, l3 + tool_link, 0.0]

# Index 0..4 = joints 1..5
min_pulses = [0, 125, 0, 0, 0]
max_pulses = [1000, 775, 500, 1000, 1000]
min_angles = [-120, -66, 0, -120, -120]
max_angles = [120, 90, 120, 120, 120]


def angle_to_pulse(idx, angle_deg):
    # np.interp clamps to the range ends, so out-of-limit angles saturate
    return int(round(np.interp(angle_deg,
                               [min_angles[idx], max_angles[idx]],
                               [min_pulses[idx], max_pulses[idx]])))


def pulse_to_angle(idx, pulse):
    return float(np.interp(pulse,
                           [min_pulses[idx], max_pulses[idx]],
                           [min_angles[idx], max_angles[idx]]))


def ik(target):
    """target = [x, y, z, phi, gamma]. Returns list of 5 pulses, or None if unreachable."""
    x, y, z, phi, gamma = target
    z = z - lengths[0] + lengths[3]  # local copy; doesn't mutate caller's list

    r = np.sqrt(x**2 + y**2 + z**2)
    if r == 0 or r > (lengths[1] + lengths[2]):
        return None

    
    zeta = 2*np.arctan(np.sqrt((2*l1*l2-l1**2-l2**2+r**2)/(2*l1*l2+l1**2+l2**2-r**2)))
    alpha = np.arcsin(l2*np.sin(zeta)/r)

    angles = np.zeros(5)
    angles[0] = np.arctan2(y, x)                           # shoulder yaw
    angles[1] = np.arctan(np.sqrt(x**2+y**2)/z)-alpha   # shoulder hinge
    angles[2] = np.pi - zeta                             # elbow hinge
    angles[3] = np.pi/2 + angles[1] + angles[2] + phi*np.pi/180                # wrist hinge
    angles[4] = 0.0                                        # set by OpenCV node later

    return [angle_to_pulse(i, ((angles[i])*180/np.pi)) for i in range(5)]


class IKNode(Node):
    def __init__(self):
        super().__init__('ik_node')
        self.subscription = self.create_subscription(
            Coordinate, 'coordinate_topic', self.listener_callback, 10)
        self.publisher_ = self.create_publisher(ForwardMsg, 'forward_topic', 10)

    def listener_callback(self, msg):
        self.get_logger().info(f"got x={msg.x} y={msg.y} z={msg.z} phi={msg.phi}")
        pulses = ik([msg.x, msg.y, msg.z, msg.phi, msg.gamma])
        if pulses is None:
            self.get_logger().error("Target is out of reach. Please choose a closer target.")
            return
        out = ForwardMsg()
        out.pulse_array = pulses
        self.publisher_.publish(out)


def main():
    rclpy.init()
    node = IKNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
