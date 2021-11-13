import serial
from time import sleep
import threading
import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from std_msgs.msg import Bool, Int64


class FlightController(Node):
    """
    This is a class which allows for the communication between the pi and any flight
    controller which supports serial communication in the ibus format. When the thread
    is started it will send serial messages to the flight controller 142 times per second
    """

    def __init__(self, port='/dev/ttyS0', throttle=885, pitch=1500, yaw=1500, roll=1500, test=False):
        super().__init__('flight_controler')

        self.port = port
        self.connection = None
        self.arming = False
        self.armed = False
        self.throttle = throttle
        self.pitch = pitch
        self.yaw = yaw
        self.roll = roll
        self.constantmessage = False

        self.arm_subscription = self.create_subscription(
            Bool, 'arm', lambda msg: self.arm() if msg.data else self.disarm, 1
        )
        self.throttle_subscription = self.create_subscription(
            Int64, 'throttle', lambda msg: self.setThrottle(msg.data), 1
        )
        self.pitch_subscription = self.create_subscription(
            Int64, 'pitch', lambda msg: self.setPitch(msg.data), 1
        )
        self.roll_subscription = self.create_subscription(
            Int64, 'roll', lambda msg: self.setRoll(msg.data), 1
        )
        self.yaw_subscription = self.create_subscription(
            Int64, 'yaw', lambda msg: self.setYaw(msg.data), 1
        )
        self.timer = self.create_timer(
            0.01, self.test_transmit if test else self.transmit
        )


    def connecttoport(self, dport=None):
        """This function connect to the desired port"""
        if dport is None:
            dport = self.port
        self.connection = serial.Serial(
            dport, 115200, timeout=10, write_timeout=10)
        print("Connected to " + self.connection.name)
        return self.connection


    def send(self, msg):
        """This function is what is used to send the final message. It takes the
        message as an argument."""
        self.connection.write(msg)


    def pack(self, channels):
        """This function packs the desired message in the ibus format. You give it the
        values for all 14 channel in an array. Unused channels must be given the
        value 0x05DC"""
        message = []

        # adds the required begining header of the message
        message.append(0x20)
        message.append(0x40)

        # puts each channel value in little endian format in the message
        for channel in channels:
            message.append(channel % 256)
            message.append(channel//256)

        # calculates and ands the required cheksum
        checksum = 0xffff - sum(message)
        message.append(checksum % 256)
        message.append(checksum // 256)

        return message


    def commands(self, channels):
        """This function will take any amount of channels given and both pack and send
        the message to the flight controller. Values given must still be given in the
        order of the channels"""
        command = []
        for i in channels:
            command.append(i)
        command += ([1000] * (14 - len(channels)))

        message = self.pack(command)

        if not self.connection:
            self.connecttoport()

        self.send(message)


    def disarm(self):
        print("Disarming Drone")
        self.armed = False


    def arm(self):
        print("Arming Drone")
        self.arming = True
        sleep(1)
        self.armed = True
        self.arming = False


    def setThrottle(self, throttle):
        self.throttle = throttle


    def setPitch(self, pitch):
        self.pitch = pitch


    def setRoll(self, roll):
        self.roll = roll


    def setYaw(self, yaw):
        self.yaw = yaw


    def transmit(self):
        self.commands(
            [self.roll, self.pitch, self.throttle, self.yaw, 2000]
            if self.armed else
            [1500, 1500, 885, 1500, 1000 if not self.arming else 2000]
        )


    def test_transmit(self):
        self.get_logger().info(
            [self.roll, self.pitch, self.throttle, self.yaw, 2000]
            if self.armed else
            [1500, 1500, 885, 1500, 1000 if not self.arming else 2000],
            end='\r'
        )


def main(args=None):
    controller = FlightController()

    rclpy.init(args=args)
    rclpy.spin(controller)

    controller.destroy_node()
    rclpy.shutdown()


def main(args=None):
    controller = FlightController(test=True)

    rclpy.init(args=args)
    rclpy.spin(controller)

    controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
