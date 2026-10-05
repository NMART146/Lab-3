import rclpy
import time
from rclpy.node import Node
from ros_robot_controller.ros_robot_controller_sdk import Board
from rosbot_msgs.msg import ForwardMsg
from rosbot_msgs.msg import GripMsg


def sanitize_input(input, upper, lower):
    if input > upper:
        input = upper
    elif input < lower:
        input = lower
    return input

class ArmControl(Node):
    def __init__(self):
        super().__init__('arm_control')
        # TODO: Subscribe to a forward control topic
        self.subscription = self.create_subscription(ForwardMsg,'forward_topic',self.listener_callback,10)
        # TODO: Subscribe to a gripper control topic
        self.subscription = self.create_subscription(GripMsg,'grip_topic',self.listener_callback,10)
    
    board = Board()

    

    def listener_callback(self, msg):
        servo_id = msg.servo_id
        command_pulse = msg.command_pulse
        
        if servo_id == 10:
            servo_id = 6
        if servo_id == 2:
            command_pulse = sanitize_input(command_pulse,750 , 150)
        if servo_id == 6:
            command_pulse = sanitize_input(command_pulse, 650, 0)
        
        targets[servo_id-1][1]=command_pulse
       
        direct()

        
    # TODO: Write an arm_control node to receive joint angles
    # and send messages to the Board.
    # See arm_test for example of board functionality.

# List of joint (id, command) pairs
targets = [(1, 500), # SHOULDER YAW
           (2, 750), # SHOUDLER HINGE KEEP JOINT 2 BETWEEN 125 AND 775
           (3, 40), # ELBOW HINGE
           (4, 350), # WRIST HINGE
           (5, 500), # WRIST ROLL
           (10, 350)] # Gripper joint. Keep below 650

duration = 1.0 # Time to complete motion

def direct():
    board = Board()
    board.enable_reception()
    board.bus_servo_set_position(duration, targets)
    for i in [1, 2, 3, 4, 5, 10]:
        print(i, ":\t", board.bus_servo_read_position(i))

def main():
    rclpy.init()
    node = ArmControl()
    rclpy.spin(node)
    rclpy.shutdown()
    

if __name__=="__main__":
    main()
