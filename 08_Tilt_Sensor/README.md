# 09 - Tilt Sensor

## Project Description

This project demonstrates how to use a tilt sensor with an Arduino Uno to detect changes in the sensor's position.

When the tilt sensor detects a tilt, the Arduino displays **"Tilt Detected"** in the Serial Monitor. When the sensor is in its normal position, it displays **"Normal Position"**.

## Components Used

* Arduino Uno
* Tilt Sensor
* Jumper Wires

## Circuit Connections

| Component   | Arduino Pin   |
| ----------- | ------------- |
| Tilt Sensor | Digital Pin 2 |
| Tilt Sensor | GND           |

The tilt sensor uses the Arduino's internal pull-up resistor through `INPUT_PULLUP`.

## Working Principle

The Arduino continuously reads the digital signal from the tilt sensor connected to Digital Pin 2.

* If the sensor output is **LOW**, the Arduino detects a tilt and prints **"Tilt Detected"**.
* If the sensor output is **HIGH**, the Arduino considers the sensor to be in the normal position and prints **"Normal Position"**.

The output is displayed on the Serial Monitor at a baud rate of **9600**.

## Arduino Code

```cpp
void setup() {
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(2) == LOW) {
    Serial.println("Tilt Detected");
  } else {
    Serial.println("Normal Position");
  }

  delay(500);
}
```

## Project Structure

```text
09_Tilt_Sensor
│
├── 01_Circuit_Diagram
│   └── tilt_sensor_circuit.png
│
├── 02_Code
│   └── 09_Tilt_Sensor.ino
│
├── 03_Output
│   └── tilt_sensor_output.png
│
└── README.md
```

## Output

The Serial Monitor displays:

```text
Normal Position
Tilt Detected
```

The output changes depending on the position of the tilt sensor.

## Applications

Tilt sensors can be used in:

* Security and alarm systems
* Anti-theft devices
* Position detection systems
* Electronic toys
* Robotics projects
* Motion and orientation detection

## Tools Used

* Arduino
* Tinkercad Circuits
* Arduino IDE / Serial Monitor
