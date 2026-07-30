# 08 - Servo Motor

## Project Overview

This project demonstrates how to control a Servo Motor using an Arduino Uno. A servo motor is an actuator that rotates to a specified angle based on commands from the Arduino. In this project, the servo moves between 0°, 90°, and 180° with a one-second delay.

---

## Components Required

- Arduino Uno
- Micro Servo Motor
- Jumper Wires
- USB Cable

---

## Circuit Connections

| Servo Motor Wire | Arduino Uno |
|------------------|-------------|
| Brown (GND)      | GND |
| Red (VCC)        | 5V |
| Orange (Signal)  | Digital Pin 9 |

---

## Working Principle

The Arduino uses the Servo library to generate PWM control signals. These signals instruct the servo motor to rotate to a desired angle. The servo moves to 0°, then 90°, and finally 180°, pausing for one second at each position before repeating the sequence.

---

## Arduino Code

```cpp
#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9);
}

void loop() {
  myServo.write(0);
  delay(1000);

  myServo.write(90);
  delay(1000);

  myServo.write(180);
  delay(1000);
}
```

---

## Output

The servo motor rotates in the following sequence:

```
0°
↓

90°
↓

180°
↓

Repeat
```

---

## Applications

- Robotic Arms
- Automatic Door Systems
- Camera Pan and Tilt Mechanisms
- CNC Machines
- Industrial Automation
- Smart Home Devices

---

## Project Structure

```
07-Servo-Motor/
│── README.md
│── servo_motor.ino
│── circuit.png
│── output.png
```

---

## Author

**Sona Catherine**

B.Tech Electronics and Communication Engineering (ECE)
