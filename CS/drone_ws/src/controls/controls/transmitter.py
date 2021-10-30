from .fccontrolclass import FlightControllerCommands as fc
from threading import Thread
from time import sleep
import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from std_msgs.msg import Bool, Int64


# def main(args=None):
#     rclpy.init(args=args)
#     node = Node('my_node_name')
#     rclpy.spin(node)
#     rclpy.shutdown()
# if __name__ == '__main__':
#     main()


class ArmTransmitter(Node):
    def __init__(self, fc):
        super().__init__('arm_transmitter')
        self.subscription = self.create_subscription(
            Bool, 'arm', self.callback, 1
        )
        self.fc = fc

    def callback(self, msg):
        print(msg)
        # if msg:
        #     self.fc.arm()
        # else:
        #     self.fc.disarm()


# def throttle_transmitter(fc):
#     rospy.init_node('arm_transmitter', anonymous=True)
#     rospy.Subscriber('throttle', int, lambda i : fc.setThrottle(i))
#     rospy.spin()


# def pitch_transmitter(fc):
#     rospy.init_node('arm_transmitter', anonymous=True)
#     rospy.Subscriber('pitch', int, lambda i : fc.setPitch(i))
#     rospy.spin()


# def roll_transmitter(fc):
#     rospy.init_node('arm_transmitter', anonymous=True)
#     rospy.Subscriber('roll', int , lambda i : fc.setRoll(i))
#     rospy.spin()


# def yaw_transmitter(fc):
#     rospy.init_node('arm_transmitter', anonymous=True)
#     rospy.Subscriber('yaw', int, lambda i : fc.setYaw(i))
#     rospy.spin()
     

def main(args=None):
    control = None #fc()
    # t1 = Thread(target=control.run)
    # t1.start()

    rclpy.init(args=args)

    executor = MultiThreadedExecutor()
    executor.add_node(ArmTransmitter(control))
    executor.spin()

if __name__ == '__main__':
    main()
