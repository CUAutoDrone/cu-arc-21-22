import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64

class PID(Node):
    def __init__(self):
        super().__init__('pid_controller')
        self.subscription = self.create_subscription(
            Int64, 'height', self.callback, 1
        )
        self.publisher = self.create_publisher(Int64, 'throttle', 1)


    def callback(self):
        throttle = 885
        #TODO: pid logic
        self.publisher.publish(Int64(throttle))


def main():
    rclpy.init(args=args)

    pid = PID()
    rclpy.spin(pid)

    pid.destroyNode()
    rclpy.shutdown()


if __name__ == '__main__':
    main()