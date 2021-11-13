from .distanceSensor import DistanceSensor
from time import sleep
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64


class HeightPublisher(Node):
    def __init__(self, sensor):
        super().__init__('arm_transmitter')
        self.publisher = self.create_publisher(Int64, 'height', 1)
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.sensor = sensor

    def timer_callback(self):
        msg = Int64()
        msg.data = self.sensor.readDistance()
        self.publisher.publish(msg)


def main(args=None):
    sensor = DistanceSensor()

    rclpy.init(args=args)

    publisher = HeightPublisher(sensor)
    rclpy.spin(publisher)

    publisher.destroyNode()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
