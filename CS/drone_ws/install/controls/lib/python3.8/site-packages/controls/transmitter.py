from .fccontrolclass import FlightControllerCommands as fc
from threading import Thread
from time import sleep
import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from std_msgs.msg import Bool, Int64


class ArmTransmitter(Node):
    def __init__(self, fc):
        super().__init__('arm_transmitter')
        self.subscription = self.create_subscription(
            Bool, 'arm', self.callback, 1
        )
        self.fc = fc

    def callback(self, msg):
        if msg.data:
            self.fc.arm()
        else:
            self.fc.disarm()


class ThrottleTransmitter(Node):
    def __init__(self, fc):
        super().__init__('throttle_transmitter')
        self.subscription = self.create_subscription(
            Int64, 'throttle', self.callback, 1
        )
        self.fc = fc

    def callback(self, msg):
        self.fc.setThrottle(msg.data)


class PitchTransmitter(Node):
    def __init__(self, fc):
        super().__init__('pitch_transmitter')
        self.subscription = self.create_subscription(
            Int64, 'pitch', self.callback, 1
        )
        self.fc = fc

    def callback(self, msg):
        self.fc.setPitch(msg.data)


class RollTransmitter(Node):
    def __init__(self, fc):
        super().__init__('roll_transmitter')
        self.subscription = self.create_subscription(
            Int64, 'roll', self.callback, 1
        )
        self.fc = fc

    def callback(self, msg):
        self.fc.setRoll(msg.data)


class YawTransmitter(Node):
    def __init__(self, fc):
        super().__init__('yaw_transmitter')
        self.subscription = self.create_subscription(
            Int64, 'yaw', self.callback, 1
        )
        self.fc = fc

    def callback(self, msg):
        self.fc.setYaw(msg.data)
     

def main(args=None):
    control = fc()
    t1 = Thread(target=control.run)
    t1.start()

    rclpy.init(args=args)

    arm = ArmTransmitter(control)
    throttle = ThrottleTransmitter(control)
    pitch = PitchTransmitter(control)
    roll = RollTransmitter(control)
    yaw = YawTransmitter(control)

    executor = MultiThreadedExecutor()

    executor.add_node(arm)
    executor.add_node(throttle)
    executor.add_node(pitch)
    executor.add_node(roll)
    executor.add_node(yaw)

    try:
        executor.spin()

    except KeyboardInterrupt:
        executor.shutdown()

        arm.destroy_node()
        throttle.destroy_node()
        pitch.destroy_node()
        roll.destroy_node()
        yaw.destroy_node()
        
        rclpy.shutdown()
        control.shutdown()

if __name__ == '__main__':
    main()
