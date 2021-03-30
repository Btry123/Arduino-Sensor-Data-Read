import serial
from serial import Serial
import time
import schedule

       

def main_func():
    arduino = serial.Serial('com5', 9600)
    arduino_data = arduino.readline()
    print('Connection established')

    decoded_values = str(arduino_data[0:len(arduino_data)].decode("utf-8"))
    list_values = decoded_values.split('x')

    for item in list_values:
        list_in_floats.append(item)

    print(list_in_floats)
    write()

    arduino_data = 0
    list_in_floats.clear()
    list_values.clear()
    arduino.close()
    print('Disconnected')


def write():
    f= open("Data.txt","a")
    f.write(str(list_in_floats)+"\n")
    f.close
    print('data is recorded')
    

# Main
list_values = []
list_in_floats = []

print('Program started')

# Setting up the Arduino
schedule.every(1).seconds.do(main_func)

while True:
    schedule.run_pending()
    time.sleep(1)






