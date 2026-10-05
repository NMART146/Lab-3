#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from ros_robot_controller.ros_robot_controller_sdk import Board
from rosbot_msgs.msg import ForwardMsg
# from rosbot_msgs.msg import GripMsg # Uncomment if needed later

def sanitize_input(value, upper, lower):
    return max(lower, min(value, upper))

class ArmControl(Node):
    def __init__(self):
        super().__init__('arm_control')
        
        # Subscribe to our forward topic
        self.subscription = self.create_subscription(
            ForwardMsg,
            'forward_topic',
            self.listener_callback,
            10
        )
        
        # Initialize the hardware board once
        self.board = Board()
        self.board.enable_reception()

        # Use a dictionary to store mutable state instead of tuples
        self.current_positions = {
            1: 500,  # SHOULDER YAW
            2: 750,  # SHOULDER HINGE
            3: 40,   # ELBOW HINGE
            4: 350,  # WRIST HINGE
            5: 500,  # WRIST ROLL
            10: 350  # GRIPPER
        }
        
        # Move arm to starting positions on boot
        self.update_arm(1.0) 
        self.get_logger().info("Arm initialized to starting positions.")

    def listener_callback(self, msg):
        servo_id = msg.servo_id
        increment = msg.command_pulse # This is now the +50 or -50 from teleop
        
        # Ensure we are only controlling known servos
        if servo_id not in self.current_positions:
            return

        # Calculate new requested position
        new_pulse = self.current_positions[servo_id] + increment

        # Apply limits based on your specifications
        if servo_id == 2:
            new_pulse = sanitize_input(new_pulse, 775, 125)
        elif servo_id == 10:
            new_pulse = sanitize_input(new_pulse, 650, 0)
        else:
            # Generic bounds for the other servos (adjust as needed for your specific arm)
            new_pulse = sanitize_input(new_pulse, 1000, 0) 
        
        # Update our internal tracking state
        self.current_positions[servo_id] = new_pulse
        
        # Send to hardware (using 0.1s duration for snappy keyboard response)
        self.update_arm(0.1)

    def update_arm(self, duration):
        # board.bus_servo_set_position expects a list of tuples: [(id, pulse), (id, pulse)...]
        targets = [(servo_id, pulse) for servo_id, pulse in self.current_positions.items()]
        
        self.board.bus_servo_set_position(duration, targets)
        
        # Optional: Log the position for debugging
        # for i in [1, 2, 3, 4, 5, 10]:
        #     self.get_logger().info(f"Servo {i}: {self.board.bus_servo_read_position(i)}")

def main(args=None):
    rclpy.init(args=args)
    node = ArmControl()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()