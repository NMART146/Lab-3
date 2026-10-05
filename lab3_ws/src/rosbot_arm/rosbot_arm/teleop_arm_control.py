#!/usr/bin/env python

from __future__ import print_function

from ros_robot_controller.ros_robot_controller_sdk import Board

import threading

import rclpy


from rosbot_msgs.msg import ForwardMsg

import sys
from select import select

if sys.platform == 'win32':
    import msvcrt
else:
    import termios
    import tty



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
        'q':(1,1),
        'a':(1,-1),
        'w':(2,1),
        's':(2,-1),
        'e':(3,1),
        'd':(3,-1),
        'r':(4,1),
        'f':(4,-1),
        't':(5,1),
        'g':(5,-1),
        'y':(10,1),
        'h':(10,-1),
}

# how much to increment each change by with keyboard press, direction determined by key
moveScalar = 50

class PublishThread(threading.Thread):
    def __init__(self, rate):
        super(PublishThread, self).__init__()
        
        self.publisher = rclpy.Publisher('forward_topic', ForwardMsg, queue_size = 1)
        # Set timeout to None if rate is 0 (causes new_message to wait forever
        # for new data to publish)
        if rate != 0.0:
            self.timeout = 1.0 / rate
        else:
            self.timeout = None

        self.start()

    def wait_for_subscribers(self):
        i = 0
        while not rclpy.is_shutdown() and self.publisher.get_num_connections() == 0:
            if i == 4:
                print("Waiting for subscriber to connect to {}".format(self.publisher.name))
            rclpy.sleep(0.5)
            i += 1
            i = i % 5
        if rclpy.is_shutdown():
            raise Exception("Got shutdown request before subscribers connected")

    def update(self, targetServo, direction):
        self.condition.acquire()
        self.targetServo = targetServo
        self.direction = direction
        # Notify publish thread that we have a new message.
        self.condition.notify()
        self.condition.release()


    def run(self):
        while True:
            outMsg = ForwardMsg
            self.condition.acquire()

            # Wait for a new message or timeout.
            self.condition.wait(self.timeout)
            current_command = board.bus_servo_read_position(self.target_servo)
            outMsg.command_pulse = current_command + (moveScalar*self.direction)
            outMsg.servo_id = self.targetServo

            self.condition.release()

            # Publish.
            self.publisher.publish(outMsg)

        # Publish stop message when thread exits.

def getKey(settings, timeout):
    if sys.platform == 'win32':
        # getwch() returns a string on Windows
        key = msvcrt.getwch()
    else:
        tty.setraw(sys.stdin.fileno())
        # sys.stdin.read() returns a string on Linux
        rlist, _, _ = select([sys.stdin], [], [], timeout)
        if rlist:
            key = sys.stdin.read(1)
        else:
            key = ''
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    return key

def saveTerminalSettings():
    if sys.platform == 'win32':
        return None
    return termios.tcgetattr(sys.stdin)

def restoreTerminalSettings(old_settings):
    if sys.platform == 'win32':
        return
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, old_settings)


if __name__=="__main__":
    settings = saveTerminalSettings()

    rclpy.init_node('teleop_arm_control')



    pub_thread = PublishThread(repeat)

    th = 0
    status = 0

    try:
        pub_thread.wait_for_subscribers()
        pub_thread.update(targetServo, direction)


        while(1):
            key = getKey(settings, key_timeout)
            if key in armBindings.keys():
                targetServo = armBindings[key][0]
                direction = armBindings[key][1]
            else:
                diretion = 0
            pub_thread.update(targetServo, direction)

    except Exception as e:
        print(e)

    finally:
        pub_thread.stop()
        restoreTerminalSettings(settings)
