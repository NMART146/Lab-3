import rclpy
from rclpy.node import Node
 
import numpy as np


##  Joint Links ##
# l0 refers to the height of the arm base wrt base_link
l0 = 0.05 + 0.0654868 + 0.0338648 + 0.0772047
l1 = 0.130
l2 = 0.130
l3 = 0.055
tool_link = 0.117

lengths = [l0, l1, l2, l3+tool_link, 0]


arm_ids = [1, 2, 3, 4, 5]

# Only joint 2 is limited to protect the screen
min_pulses = [0, 125, 0, 0, 0]
max_pulses = [1000, 775, 500, 1000, 1000]
min_angles = [-120, -90, -120, -120, -120]
max_angles = [120, 66, 0, 120, 120]

#joint matrix
joints = np.array([[1,2,3,4,5],[0.0,0.0,0.0,0.0,0.0]]) #row1-joint id, row2-joint angle in radians (need to convert to degree and then pulse)


# All joints operate in the range -120 to 120 with a pulse width range of 0 to 1000

# TODO: Write helper scripts to convert from one to the other.

def angle_to_pulse(joint_id, angle):
    pulse_range = [min_pulses[joint_id], max_pulses[joint_id]]
    angle_range = [min_angles[joint_id], max_angles[joint_id]]
    pulse = np.interp(angle, angle_range, pulse_range)
    return pulse

def pulse_to_angle(joint_id, pulse):
    pulse_range = [min_pulses[joint_id], max_pulses[joint_id]]
    angle_range = [min_angles[joint_id], max_angles[joint_id]]
    angle = np.interp(pulse, pulse_range, angle_range)
    return angle

class IKNode(Node):
    def __init__(self):
        super().__init__('ik_node')
        #subscribe to coordinate topic (x,y,z,phi,gamma)
        #publish to forward topic (servo_id, command_pulse)
        
        coordinate[2] = coordinate[2] - lengths[0] + lengths[3] #adjust for base height
        r = np.sqrt(coordinate[0]**2 + coordinate[1]**2 + coordinate[2]**2)
        if r > (lengths[1] + lengths[2]) or r == 0:
            self.get_logger().error("Target is out of reach. Please choose a closer target.")
            return
        else:
            zeta = np.arccos((-(lengths[1]**2) - (lengths[2]**2) + r**2)/(-2*lengths[1]*lengths[2]))
            joints[1,0] = np.arcsin((lengths[2]*np.sin(zeta))/r)+np.arcsin(coordinate[2]/r) #shoulder hinge
            joints[1,1] = np.pi/2 - np.arctan2(coordinate[1], coordinate[0]) #shoulder yaw
            joints[1,2] = np.pi - zeta #elbow hinge
            joints[1,3] = joints[1,0] - joints[1,2] + coordinate[3] #wrist hinge
            #joints[1,4] will be set by openCV node. ignore for now ig
            for i in range(5):
                joints[1,i] = angle_to_pulse(joints[0,i], np.rad2deg(joints[1,i]))
            return joints
            
        
    # TODO: Write inverse kinematics node

def main():
    rclpy.init()
    ik_node = IKNode()
    rclpy.spin(ik_node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
