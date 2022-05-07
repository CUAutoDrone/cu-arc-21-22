# This file defines and tests a function to process the lines coming from the GPS sensor
# These lines contain a lot of information, but we are only interested in latitude, longitud and altitude
import serial
import time
import threading

class GPS:

    def __init__(self):
        self.last_updated = None
        self.gps_data = {}
        self.t = threading.Thread(target=self.start, args=(True,))
        self.t.start()
        self.stop_thread = False

    @property
    def ms_since_last_update(self):
        return (time.time()-self.last_updated)*1000

    def process_line(self, line, print_output=False):
        # Processes a line. Returns None when no information is found. Otherwise it returns a dictionary
        # with three keys: altitude, latitude and longitude
        parts = line.split(',')     # Values are separated by commas
        if parts[0] != '$GNRMC':    # Lines with information start with these string
            return
        #print(line)
        try:
            altitude = float(parts[1])/100
            latitude_multiplier = -1 if parts[4] == 'S' else 1          # Positve values are N (North), negative values are S (South)
            latitude = latitude_multiplier * (float(parts[3])/100)      # We scale to standard units (degrees)
            longitude_multiplier = -1 if parts[6] == 'W' else 1         # Positive values E (East), negative values are W (West)
            longitude = longitude_multiplier * (float(parts[5])/100)    # We scale 
            self.last_updated = time.time()
            self.gps_data = {
                'altitude': altitude,
                'latitude': latitude,
                'longitude': longitude
            }
            if print_output:
                print(self.gps_data)
        except:
            pass


    def start(self, print_output=False):
        print('Reading thread has started')
        ser = serial.Serial ("/dev/ttyS0", 9600)    # We open a serial port
        current_string = ''
        while True:
            byte_read = ser.read().decode()         # We read the incoming byte
            current_string += byte_read             # We add the byte to a string for processing later
            if byte_read == '\n':                   # When we reach the end of line, we process the string
            #print(current_string)
            #s = None
                self.process_line(current_string, print_output=print_output)
                current_string = ''
            if self.stop_thread:
                break
        ser.close()

    def __del__(self):
        self.stop_thread = True


if __name__ == '__main__':
    gps = GPS()
    time.sleep(10)
    print(gps.ms_since_last_update)
    del gps



