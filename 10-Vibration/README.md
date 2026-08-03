# Vibration Motor using Arduino Uno

![Arduino](https://img.shields.io/badge/Arduino-Uno-333333)
![C++](https://img.shields.io/badge/Language-C++-00534E)

This project demonstrates how to control a **vibration motor** using an Arduino Uno. The motor vibrates ON for 1 second and OFF for 1 second continuously.

## Description

A vibration motor is an actuator that produces vibration when powered. Unlike a buzzer, it produces haptic feedback rather than sound. This project simply toggles the motor on and off at 1-second intervals.

## Hardware Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno | 1 | Main controller |
| Vibration Motor | 1 | 3-5V motor |
| NPN Transistor (2N2222) | 1 | Motor switch |
| 1N4007 Diode | 1 | Flyback protection |
| 220Ω Resistor | 1 | Base current limiting |
| Breadboard | 1 | For prototyping |
| Jumper wires | — | For wiring |

## Pin Connections

| Component | Arduino Pin |
|-----------|-------------|
| Vibration Motor | Digital Pin 9 (via transistor) |

> **Note:** The motor should be driven through a transistor because the Arduino pin cannot supply enough current for most vibration motors. A flyback diode should be placed across the motor terminals.

## Working

1. Pin 9 is configured as OUTPUT.
2. `digitalWrite(9, HIGH)` activates the vibration motor.
3. `delay(1000)` waits 1 second.
4. `digitalWrite(9, LOW)` deactivates the motor.
5. `delay(1000)` waits another 1 second.
6. The cycle repeats indefinitely.

## Code

```cpp
void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);
}
```

## Expected Output

The vibration motor vibrates for 1 second, stops for 1 second, and repeats continuously.

## File Structure

```
10-Vibration/
├── README.md                 ← This file
└── Vibration/
    ├── Code/
    │   └── sketch.ino        ← Arduino source code
    └── Images/
        ├── img1.png          ← Circuit photo
        └── img2.png          ← Setup photo
```

## Learning Outcomes

- Vibration motor control
- Transistor as a switch
- Flyback diode protection
- `digitalWrite()` and `delay()` timing

## Applications

- Haptic feedback in games/controllers
- Silent alarms
- Mobile phone vibration
- Tactile warning systems

## License

Part of the **Actuator-Projects** repository, MIT License.
