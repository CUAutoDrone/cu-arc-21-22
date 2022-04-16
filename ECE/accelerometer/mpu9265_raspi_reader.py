# coding: utf-8
## @package faboMPU9250
#  This is a library for the FaBo 9AXIS I2C Brick.
#
#  http://fabo.io/202.html
#
#  Released under APACHE LICENSE, VERSION 2.0
#
#  http://www.apache.org/licenses/
#
#  FaBo <info@fabo.io>


# Accelerometer reader that outputs pitch, roll and yaw.
# Pitch and roll are accurate, but yaw doesn't react to movement

import FaBo9Axis_MPU9250
import time
import sys
from math import *

mpu9250 = FaBo9Axis_MPU9250.MPU9250()

try:
    while True:

        # raw accelerometer data 
        accel = mpu9250.readAccel()
        #print(" ax = " , ( accel['x'] ))
        #print(" ay = " , ( accel['y'] ))
        #print(" az = " , ( accel['z'] ))

        # raw gyroscope data
        gyro = mpu9250.readGyro()
        #print(" gx = " , ( gyro['x'] ))
        #print(" gy = " , ( gyro['y'] ))
        #print(" gz = " , ( gyro['z'] ))

        # raw magnetic data
        mag = mpu9250.readMagnet()
        #print(" mx = " , ( mag['x'] ))
        #print(" my = " , ( mag['y'] ))
        #print(" mz = " , ( mag['z'] ))

        # assign
        accelX = accel['x']
        accelY = accel['y']
        accelZ = accel['z']
        gyroX = gyro['x']
        gyroY = gyro['y']
        gyroZ = gyro['z']
        magX= mag['x']
        magY = mag['y']
        magZ = mag['z']

        # convert accelerometer data into pitch and roll
        pitch = atan2(accelY ,( sqrt ((accelX * accelX) + (accelZ * accelZ))))
        roll = atan2(-accelX ,( sqrt((accelY * accelY) + (accelZ * accelZ))))

        # convert magnetic data, pitch, and roll into yaw
        Yh = (magY * cos(roll)) - (magZ * sin(roll))
        Xh = (magX * cos(pitch)) + (magY * sin(roll)*sin(pitch)) + (magZ * cos(roll) * sin(pitch))
        yaw =  atan2(Yh, Xh)
        
        # Convert to degrees
        roll = roll*57.3
        pitch = pitch*57.3
        yaw = yaw*57.3

        print("Pitch: "  + str(pitch))
        print("Roll: " + str(roll))
        print("Yaw: " + str(yaw))

        time.sleep(0.5)

except KeyboardInterrupt:
    sys.exit()
