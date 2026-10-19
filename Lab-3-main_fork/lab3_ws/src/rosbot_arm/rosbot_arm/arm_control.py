#!/usr/bin/env python3

import rclpy
import json
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

        # Use a dictionary to store mutable state mapping Servo ID -> Pulse
        self.current_positions = {
            0: 500,  # SHOULDER YAW
            1: 750,  # SHOULDER HINGE
            2: 40,   # ELBOW HINGE
            3: 350,  # WRIST HINGE
            4: 500,  # WRIST ROLL
            10: 350  # GRIPPER
        }
        
        # Move arm to starting positions on boot
        self.update_arm(5.0) 
        self.get_logger().info("Arm initialized to starting positions.")

    def listener_callback(self, msg):
        # Extract the 5 elements from the custom message array
        pulse_array = msg.pulse_array
        
        self.current_positions[0] = sanitize_input(pulse_array[0], 1000, 0)
        self.current_positions[1] = sanitize_input(pulse_array[1], 775, 125)
        self.current_positions[2] = sanitize_input(pulse_array[2], 500, 30)
        self.current_positions[3] = sanitize_input(pulse_array[3], 750, 250)
        self.current_positions[4] = sanitize_input(pulse_array[4], 875, 125)
        
        # Send to hardware (using 0.1s duration for snappy keyboard response)
        self.update_arm(1.0)

    def update_arm(self, duration):
        # board.bus_servo_set_position expects a list of tuples: [(id, pulse), (id, pulse)...]
        targets = [(servo_id+1, pulse) for servo_id, pulse in self.current_positions.items()]
        
        self.board.bus_servo_set_position(duration, targets)
        

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
