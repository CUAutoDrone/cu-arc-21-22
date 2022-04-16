# This file defines and tests a function to process the lines coming from the GPS sensor
# These lines contain a lot of information, but we are only interested in latitude, longitud and altitude


def process_line(line):
    # Processes a line. Returns None when no information is found. Otherwise it returns a dictionary
    # with three keys: altitude, latitude and longitude
    parts = line.split(',')     # Values are separated by commas
    if parts[0] != '$GNRMC':    # Lines with information start with these string
        return None
    altitude = float(parts[1])/100
    latitude_multiplier = -1 if parts[4] == 'S' else 1          # Positve values are N (North), negative values are S (South)
    latitude = latitude_multiplier * (float(parts[3])/100)      # We scale to standard units (degrees)
    longitude_multiplier = -1 if parts[6] == 'W' else 1         # Positive values E (East), negative values are W (West)
    longitude = longitude_multiplier * (float(parts[5])/100)    # We scale 
    return {
        'altitude': altitude,
        'latitude': latitude,
        'longitude': longitude
    }

import serial
ser = serial.Serial ("/dev/ttyS0", 9600)    # We open a serial port
current_string = ''
while True:
    byte_read = ser.read().decode()         # We read the incoming byte
    current_string += byte_read             # We add the byte to a string for processing later
    if byte_read == '\n':                   # When we reach the end of line, we process the string
        s = process_line(current_string)
        if s is not None:
            print(s)
        current_string = ''
