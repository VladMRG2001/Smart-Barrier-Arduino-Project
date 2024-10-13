# Smart Barrier Arduino Project

## Project Objectives
The aim of this project is to create a simulation of a real-world barrier.
The solution presented is designed with simplicity in mind, while still being applicable in real-world situations.

## Components Used
The materials used for this project include:

1. Arduino UNO <br>
2. HC-SR04 Ultrasonic Sensor <br>
3. SG90 Micro Servo Motor <br>
4. Breadboard <br>
5. LEDs (red and green) <br>
6. Resistors (2) <br>
7. Jumper wires <br>
8. Barrier <br>
9. Demonstration Car (LEGO) <br>
10. Wooden Board <br>

## How It Works
The assembled system connects to a laptop, initiating the implementation of the solution. A LEGO car is used to demonstrate functionality. Initially, the car is at the end of the track, and the sensor detects nothing. The barrier remains down, and the red LED is on, indicating that passage is blocked.

When the car approaches the barrier, the sensor detects it, causing the barrier to lift. The red LED turns off, and the green LED lights up to indicate that the car can safely proceed. After the car passes the barrier, it closes again, as the sensor no longer detects anything. The red LED is activated once more.

It's important to note that the barrier will not close while the sensor detects the car in front of it, preventing accidents. The sensor is placed next to the barrier, ensuring that even if the driver stops with the back of the car right under the barrier, it will not close because the sensor will still detect the car.

## Fritzing Project Diagram
![image](https://github.com/user-attachments/assets/bbfb952b-1d54-4de9-a18d-e6c3045712a3)

## Real-Life Photos
Position 1 (Barrier down + red LED): <br>
![image](https://github.com/user-attachments/assets/3362076f-8088-408c-b0fb-355a3c4b66c2)

Position 2 (Barrier up + green LED): <br>
![image](https://github.com/user-attachments/assets/4d4ebd3f-8d2b-48b1-a23f-9bbd21e98cb7)

## Solution Testing
Testing was conducted after fully assembling the barrier with all necessary components. After uploading the code to the Arduino board, a few seconds were allowed for configuration, and then the functionality of the solution was tested. After repeated tests, it was concluded that the solution is effective, and the barrier is functional.
