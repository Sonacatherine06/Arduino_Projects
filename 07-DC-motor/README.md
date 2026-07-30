# DC Motor Control using Arduino Uno

## Overview
This project demonstrates how to control a DC motor using an Arduino Uno. The Arduino turns the motor ON for 2 seconds and OFF for 2 seconds repeatedly through a digital output pin.

## Components Required
- Arduino Uno
- DC Motor
- Motor Driver (L293D/L298N or Transistor Driver)
- Jumper Wires
- External Power Supply (if required)

## Circuit Connections

| Component | Arduino Uno |
|----------|-------------|
| Motor Control Input | Digital Pin 9 |
| GND | GND |
| Power | External Supply / 5V (depending on motor) |

> **Note:** A DC motor should not be connected directly to the Arduino pin. Use a motor driver or transistor to protect the Arduino.

## Working
1. Arduino configures Digital Pin 9 as an output.
2. The pin is set HIGH to turn the motor ON.
3. The motor runs for 2 seconds.
4. The pin is set LOW to turn the motor OFF.
5. The cycle repeats continuously.

## Output
- Motor rotates for **2 seconds**.
- Motor stops for **2 seconds**.
- The ON/OFF cycle repeats continuously.

## Project Files
- `dc_motor.ino` – Arduino source code
- `dc_motor_circuit.png` – Circuit diagram
- `dc_motor_output.png` – Output screenshot
- `README.md` – Project documentation

## Applications
- Robot movement
- Automatic fan control
- Conveyor belt systems
- Small automation projects
- Motor speed and direction control (with advanced circuits)

## Author
**Sona Catherine**  
B.Tech Electronics and Communication Engineering
