from fccontrolclass import FlightControllerCommands as fc
from threading import Thread
from time import sleep

def main():
    control = fc()
    t1 = Thread(target=control.run)

    t1.start()
    sleep(1)

    control.arm()
    sleep(1)

    # take off
    control.throttle = 1500
    sleep(2)
    # land
    descentSize = 1
    while control.throttle > 1000:
        control.throttle -= descentSize
        sleep(control.senddelay)

    control.throttle = 1000
    sleep(2)

    control.disarm()

    control.constantmessage = False


if __name__ == '__main__':
    main()
