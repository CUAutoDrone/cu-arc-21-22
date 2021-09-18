import serial
from time import sleep
import threading
import keyboard

from fccontrolclass import FlightControllerCommands as fc

control = fc()
t1 = threading.Thread(target=control.run)
t1.start()

armed = False

def a():
    if not armed:
        control.arm()
    else:
        print("already armed")

def d():
    if armed:
        control.disarm()
    else:
        print("cannot disarmed if not armed")

def t():
    control.throttle = 1680
    print("throttle:", control.throttle)

def up():
    control.throttle += 20
    print("throttle:", control.throttle)

def down():
    control.throttle -= 20
    print("throttle:", control.throttle)

keyboard.add_hotkey('a', a)
keyboard.add_hotkey('d', d)
keyboard.add_hotkey('t', t)
keyboard.add_hotkey('up', up)
keyboard.add_hotkey('down', down)
keyboard.wait()

    

    