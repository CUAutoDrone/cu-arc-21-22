import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool


class KillSwitch(Node):
    def __init__(self):
        super().__init__('pid_controller')
        self.publisher = self.create_publisher(Bool, 'arm', 1)


    def kill(self):
        msg = Bool()
        msg.data = False
        self.publisher.publish(msg)


def main(args=None):
    rclpy.init(args=args)

    kill_switch = KillSwitch()
    input("Press enter to kill")
    kill_switch.kill()

    kill_switch.destroyNode()
    rclpy.shutdown()


if __name__ == '__main__':
    main()