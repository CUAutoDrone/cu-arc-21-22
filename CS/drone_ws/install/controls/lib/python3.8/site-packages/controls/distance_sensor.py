from smbus import SMBus
from time import sleep
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64

class DistanceSensor(Node):
    def __init__(self):
        super().__init__('distance_sensor')
        self.bus = SMBus(1)
        self.publisher = self.create_publisher(Int64, 'height', 1)
        self.timer = self.create_timer(0.1, self.timer_callback)


    #publisher callback for every tick
    def timer_callback(self):
        msg = Int64()
        msg.data = self.readDistance()
        self.publisher.publish(msg)


    #reads data from a specified register with I2C
    def read(self, address, register):
        """
        In order to read from a register, you have to tell the i2c device which register first.
        You don't write anything into the register. Then you do a read and it will give it to you.
        """
        self.bus.write_byte(address,register)
        return self.bus.read_byte(address)


    #writes data to a specified register with I2C
    def write(self, address, register, data):
        """
        This writes data to a specified register
        """
        self.bus.write_byte_data(address,register,data)


    #Reads lidar distance data, gives output in centimeters
    def readDistance(self):
        """
        This code is based on the directions specified in the data sheet look here:
        https://cdn-shop.adafruit.com/product-files/4058/4058_LIDAR_Lite_v3_Operation_Manual_and_Technical_Specifications.pdf
        and go to page 4 in the I2C Interface section for the exact specifications and steps.
        """
        bit_mask= 0b00000001
        #step 1
        self.write(0x62,0x00,0x04)
        #step 2. We check the last bit by doing a logical and with the mask and the data to isolate the last bit
        value = self.read(0x62,0x01)
        check = bit_mask & value
        #keep reading until the last bit goes low
        while(check==1):
            value=self.read(0x62,0x01)
            check=bit_mask & value
        #step 3
        low = self.read(0x62,0x10)
        high =  self.read(0x62, 0x0f)
        value = high*256 + low
        return value


def main(args=None):
    rclpy.init(args=args)

    distance_sensor = DistanceSensor()
    rclpy.spin(distance_sensor)

    distance_sensor.destroyNode()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

