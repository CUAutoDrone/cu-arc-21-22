def process_line(line):
    parts = line.split(',')
    if parts[0] != '$GNRMC':
        return None
    altitude = float(parts[1])/100
    latitude_multiplier = -1 if parts[4] == 'S' else 1
    latitude = latitude_multiplier * (float(parts[3])/100)
    longitude_multiplier = -1 if parts[6] == 'W' else 1
    longitude = longitude_multiplier * (float(parts[5])/100)
    return {
        'altitude': altitude,
        'latitude': latitude,
        'longitude': longitude
    }
import serial
ser = serial.Serial ("/dev/ttyS0", 9600)
current_string = ''
while True:
    byte_read = ser.read().decode()
    current_string += byte_read
    if byte_read == '\n':
        s = process_line(current_string)
        if s is not None:
            print(s)
        current_string = ''