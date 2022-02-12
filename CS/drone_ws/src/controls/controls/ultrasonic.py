import RPi.GPIO as GPIO
import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64


class UltrasonicSensor(Node):
    def __init__(self):
        super().__init__('ultrasonic_sensor')

        GPIO.setmode(GPIO.BCM)

        self.GPIO_TRIGGER = 2
        self.GPIO_ECHO = 3

        GPIO.setup(GPIO_TRIGGER, GPIO.OUT)
        GPIO.setup(GPIO_ECHO, GPIO.IN)

        self.publisher = self.create_publisher(Int64, 'height', 1)
        self.timer = self.create_timer(0.1, self.timer_callback)


    def timer_callback(self):
        msg = Int64()
        msg.data = self.distance()
        self.publisher.publish(msg)


    def distance():
        # set Trigger to HIGH
        GPIO.output(GPIO_TRIGGER, True)
    
        # set Trigger after 0.01ms to LOW
        time.sleep(0.00001)
        GPIO.output(GPIO_TRIGGER, False)
    
        StartTime = time.time()
        StopTime = time.time()
    
        # save StartTime
        while GPIO.input(GPIO_ECHO) == 0:
            StartTime = time.time()
    
        # save time of arrival
        while GPIO.input(GPIO_ECHO) == 1:
            StopTime = time.time()
    
        # time difference between start and arrival
        TimeElapsed = StopTime - StartTime
        # multiply with the sonic speed (34300 cm/s)
        # and divide by 2, because there and back
        distance = (TimeElapsed * 34300) / 2
    
        return distance
 

def main(args=None):
    rclpy.init(args=args)

    distance_sensor = UltrasonicSensor()
    rclpy.spin(distance_sensor)

    distance_sensor.destroyNode()
    rclpy.shutdown()
    GPIO.cleanup()


if __name__ == '__main__':
    main()
