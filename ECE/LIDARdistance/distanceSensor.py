from smbus import SMBus
from time import sleep
bus = SMBus(1)

#reads data from a specified register with I2C
def read(address, register):
	"""
	In order to read from a register, you have to tell the i2c device which register first.
	You don't write anything into the register. Then you do a read and it will give it to you.
	"""
	bus.write_byte(address,register)
	return bus.read_byte(address)

#writes data to a specified register with I2C
def write(address, register, data):
	"""
	This writes data to a specified register
	"""
	bus.write_byte_data(address,register,data)

#Reads lidar distance data, gives output in centimeters
def readDistance():
	"""
	This code is based on the directions specified in the data sheet look here:
	https://cdn-shop.adafruit.com/product-files/4058/4058_LIDAR_Lite_v3_Operation_Manual_and_Technical_Specifications.pdf
	and go to page 4 in the I2C Interface section for the exact specifications and steps.
	"""
	bit_mask= 0b00000001
	#step 1 (register change speicified by documentation for LIDAR)
	write(0x62,0x00,0x04)
	#step 2. We check the last bit by doing a logical and with the mask and the data to isolate the last bit
	value = read(0x62,0x01)
	check = bit_mask & value
	#keep reading until the last bit goes low
	while(check==1):
		value=read(0x62,0x01)
		check=bit_mask & value
	#step 3 Modifying register value to get distance value
	low = read(0x62,0x10)
	high =  read(0x62, 0x0f)
	value = high*256 + low
	return value

if __name__ == '__main__':
	while True:
		print(readDistance())

