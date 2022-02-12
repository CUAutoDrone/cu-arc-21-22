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

import FaBo9Axis_MPU9250
import time
import sys
from math import *

mpu9250 = FaBo9Axis_MPU9250.MPU9250()

#Ithaca
magnetic_declination = -11.767

#Holliston
#magnetic_declination = -14.1

def update_q (ax, ay, az, gx, gy, gz, mx, my, mz, q, deltaT):
    deltaT = abs(deltaT * 0.001 * 0.001)
    q0 = q[0]
    q1 = q[1]
    q2 = q[2]
    q3 = q[3]
    q[0] += 0.5 * ((-q1 * gx) - (q2 * gy) - (q3 * gz)) * deltaT
    q[1] += 0.5 * ((q0 * gx) + (q2 * gz) - (q3 * gy)) * deltaT
    q[2] += 0.5 * ((q0 * gy) - (q1 * gz) + (q3 * gx)) * deltaT
    q[3] += 0.5 * ((q0 * gz) + (q1 * gy) - (q2 * gx)) * deltaT
    recipNorm = 1.0 / sqrt((q[0] * q[0]) + (q[1] * q[1]) + (q[2] * q[2]) + (q[3] * q[3]))
    q[0] *= recipNorm
    q[1] *= recipNorm
    q[2] *= recipNorm
    q[3] *= recipNorm

def update_yaw (qw, qx, qy, qz):
    a12 = 2.0 * ((qx * qy) + (qw * qz))
    a22 = (qw * qw) + (qx * qx) - (qy * qy) - (qz * qz)
    yaw = atan2f(a12, a22)
    yaw = yaw*57.3
    yaw += magnetic_declination
    if (yaw >= 180.0):
        yaw -= 360.0
    elif (yaw < -180):
        yaw += 360
    return yaw

try:
    q = [1.0, 0.0, 0.0, 0.0]

    while True:

        oldTime = (time.time_ns())//1000

        accel = mpu9250.readAccel()

        gyro = mpu9250.readGyro()

        mag = mpu9250.readMagnet()

        ax = accel['x']
        ay = accel['y']
        az = accel['z']
        gx = gyro['x']
        gy = gyro['y']
        gz = gyro['z']
        mx = mag['x']
        my = mag['y']
        m = mag['z']

        pitch = atan2(ay ,( sqrt ((ax * ax) + (az * az))))
        roll = atan2(-ax ,( sqrt((ay * ay) + (az * az))))
        roll = roll*57.3
        pitch = pitch*57.3

        newTime = (time.time_ns())//1000
        deltaT = newTime - oldTime
        update_q(-ax, ay, az, radians(gx), radians(-gy), radians(-gz), my, -mx, mz, q, deltaT)
        yaw = update_yaw(q[0], q[1], q[2], q[3])

        roll = roll*57.3
        pitch = pitch*57.3

        print("Pitch: "  + str(pitch))
        print("Roll: " + str(roll))
        print("Yaw: " + str(yaw))

	    time.sleep(0.5)

except KeyboardInterrupt:
    sys.exit()
