#!/usr/bin/env python
import rospy
from distanceSensor import readDistance
from std_msgs.msg import String

topic = "/lidar/height"
pub = rospy.Publisher(topic, String, queue_size=1)
rospy.init_node("height", anonymous=True)

rate = rospy.Rate(10) # 10hz

while not rospy.is_shotdown():
    dist = readDistance()
    rospy.loginfo(dist)
    pub.publish(dist)
    rate.sleep()