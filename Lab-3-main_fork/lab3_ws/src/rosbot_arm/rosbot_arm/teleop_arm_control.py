#!/usr/bin/env python3

import sys
import select
import termios
import tty
import rclpy
from rclpy.node import Node
from rosbot_msgs.msg import ForwardMsg

msg = """
Reading from the keyboard and Publishing to the arm!
---------------------------
Arm Moving around:

q/a is base rotation
w/s is 'shoulder' pitch
e/d is 'elbow' rotation
r/f is 'wrist' pitch
t/g is 'wrist' rotation
y/h is gripper control

CTRL-C to quit
"""

armBindings = {
    'q': (1, 1),
    'a': (1, -1),
    'w': (2, 1),
    's': (2, -1),
    'e': (3, 1),
    'd': (3, -1),
    'r': (4, 1),
    'f': (4, -1),
    't': (5, 1),
    'g': (5, -1),
    'y': (10, 1),
    'h': (10, -1),
}

# How much to increment each change by with keyboard press
moveScalar = 50

def getKey(settings):
    if sys.platform == 'win32':
        import msvcrt
        return msvcrt.getwch()
    tty.setraw(sys.stdin.fileno())
    rlist, _, _ = select.select([sys.stdin], [], [], 0.1)
    if rlist:
        key = sys.stdin.read(1)
    else:
        key = ''
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    return key

class TeleopArm(Node):
    def __init__(self):
        super().__init__('teleop_arm_keyboard')
        self.publisher = self.create_publisher(ForwardMsg, 'forward_topic', 10)

    def publish_command(self, servo_id, direction):
        outMsg = ForwardMsg()
        outMsg.servo_id = servo_id
        # Send the increment (+50 or -50) instead of the absolute position
        outMsg.command_pulse = direction * moveScalar 
        self.publisher.publish(outMsg)

def main():
    if sys.platform != 'win32':
        settings = termios.tcgetattr(sys.stdin)
    
    rclpy.init()
    node = TeleopArm()

    print(msg)

    try:
        while rclpy.ok():
            key = getKey(settings)
            if key in armBindings.keys():
                targetServo = armBindings[key][0]
                direction = armBindings[key][1]
                node.publish_command(targetServo, direction)
            elif key == '\x03': # CTRL-C
                break
            
            rclpy.spin_once(node, timeout_sec=0.01)

    except Exception as e:
        print(e)
    finally:
        if sys.platform != 'win32':
            termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()