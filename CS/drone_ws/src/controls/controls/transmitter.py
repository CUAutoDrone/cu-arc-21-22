from fccontrolclass import FlightControllerCommands as fc
import rospy
from threading import Thread
from time import sleep


def arm_transmitter(fc):
    rospy.init_node('arm_transmitter', anonymous=True)
    rospy.Subscriber('arm', bool, lambda b : fc.arm() if b else fc.disarm())
    rospy.spin()


def throttle_transmitter(fc):
    rospy.init_node('arm_transmitter', anonymous=True)
    rospy.Subscriber('throttle', int, lambda i : fc.setThrottle(i))
    rospy.spin()


def pitch_transmitter(fc):
    rospy.init_node('arm_transmitter', anonymous=True)
    rospy.Subscriber('pitch', int, lambda i : fc.setPitch(i))
    rospy.spin()


def roll_transmitter(fc):
    rospy.init_node('arm_transmitter', anonymous=True)
    rospy.Subscriber('roll', int , lambda i : fc.setRoll(i))
    rospy.spin()


def yaw_transmitter(fc):
    rospy.init_node('arm_transmitter', anonymous=True)
    rospy.Subscriber('yaw', int, lambda i : fc.setYaw(i))
    rospy.spin()
     

def main():
    control = fc()
    t1 = Thread(target=control.run)
    t1.start()

    arm = Thread(target=arm_transmitter, args=(control,))
    arm.start()

    throttle = Thread(target=throttle_transmitter, args=(control,))
    throttle.start()

    pitch = Thread(target=pitch_transmitter, args=(control,))
    pitch.start()

    roll = Thread(target=roll_transmitter, args=(control,))
    roll.start()
    
    yaw = Thread(target=yaw_transmitter, args=(control,))
    yaw.start()


if __name__ == '__main__':
    main()
