import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64

class PID(Node):
    def __init__(self):
        super().__init__('pid_controller')
        self.height_subscription = self.create_subscription(
            Int64, 'height', self.sensor_callback, 1
        )

        self.desired_height_subscription = self.create_subscription(
            Int64, 'desired_height', self.update_callback, 1
        )

        self.publisher = self.create_publisher(Int64, 'throttle', 1)

        self.desired_height = 0

        self.kp = 3
        self.ki = 0
        self.kd = 0

        self.sum = 0
        self.last_error = 0

        self._neutral_throttle = 1030


    def update_callback(self, msg):
        self.desired_height = msg.data
        self.sum = 0


    def sensor_callback(self, msg):
        current_height = msg.data
        current_error = self.desired_height - current_height
        
        self.sum += current_error
        u = self.kp * current_error + \
            self.ki * self.sum + \
            self.kd * (current_error - self.last_error)
        
        self.last_error = current_error

        msg = Int64()
        msg.data = int(self.u_to_throttle(u))
        self.publisher.publish(msg)

    
    def u_to_throttle(self, u):
        return min(u + self._neutral_throttle, 2000)


def main(args=None):
    rclpy.init(args=args)

    pid = PID()
    rclpy.spin(pid)


if __name__ == '__main__':
    main()
