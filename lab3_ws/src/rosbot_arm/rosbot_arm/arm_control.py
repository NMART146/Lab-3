import rclpy
from rclpy.node import Node
from ros_robot_controller.ros_robot_controller_sdk import Board


class ArmControl(Node):
    def __init__(self):
        super().__init__('arm_control')
        # TODO: Subscribe to a forward control topic
        self.subscription = self.create_subscription(ForwardMsg,'forward_topic',)
        # TODO: Subscribe to a gripper control topic
        self.subscription = self.create_subscription(,'gripControl',)
    
    board = Board()


    def listener_callback(self, ForwardMsg)
        
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


def main():
    rclpy.init()
    node = ArmControl()
    rclpy.spin(node)
    rclpy.shutdown()
    

if __name__=="__main__":
    main()
