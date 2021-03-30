# Arduino-Sensor-Data-Read
Receiving data from Arduino in serial connection

In this project, it is aimed to save the information from the sensors to the txt file.



# Step 1 Arduino Section

![image](https://user-images.githubusercontent.com/55946999/113035757-2b298880-919c-11eb-8fab-bf80b344890d.png)

Used items on arduino
1. 1K Ohm resistors X2
2. Tmp36 X1
3. Photoresistor X1
4. Button X1

After following the diagram, download the sketch_mar23a.ino and upload it to the arduino.

# Step 2 Python Part
Download Arduno_Data_Read file and open it. Download the pyserial library (pip install pyserial)

When you execute the code, you will get these outputs:

**Terminal**:

![image](https://user-images.githubusercontent.com/55946999/113038892-b8221100-919f-11eb-8774-05a50553fd00.png)


**Data.txt**: 


![image](https://user-images.githubusercontent.com/55946999/113038947-c7a15a00-919f-11eb-9838-abc3668b4ba0.png)

**The Source I Used**

* https://www.instructables.com/Sending-Data-From-Arduino-to-Python-Via-USB/
* https://www.youtube.com/watch?v=Tnsm_JteSSE
* https://www.tutorialspoint.com/arduino/arduino_temperature_sensor.htm
* https://arduinogetstarted.com/tutorials/arduino-light-sensor
* https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button



