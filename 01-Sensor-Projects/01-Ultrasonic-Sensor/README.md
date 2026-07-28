# Arduino Ultrasonic Sensor Distance Measurement

## Project Overview
This project demonstrates how to measure the distance between an object and an HC-SR04 Ultrasonic Sensor using an Arduino Uno. The measured distance is calculated and displayed on the Serial Monitor.

## Components Required
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Breadboard
- Jumper Wires

## Circuit Connections

| HC-SR04 Pin | Arduino Uno Pin |
|--------------|-----------------|
| VCC          | 5V              |
| GND          | GND             |
| TRIG         | Digital Pin 9   |
| ECHO         | Digital Pin 10  |

## Arduino Code

```cpp
const int trigPin = 9;
const int echoPin = 10;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2;

  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}
```

## How It Works

1. The Arduino sends a 10-microsecond pulse through the TRIG pin.
2. The HC-SR04 sensor transmits an ultrasonic sound wave.
3. The sound wave reflects from the nearest object.
4. The ECHO pin stays HIGH until the reflected wave returns.
5. Arduino measures the travel time using `pulseIn()`.
6. The distance is calculated using:

```
Distance = (Duration × 0.034) / 2
```

7. The calculated distance is printed on the Serial Monitor every 500 milliseconds.

## Expected Output

```
Distance = 12.45 cm
Distance = 18.63 cm
Distance = 24.91 cm
```

*The values change depending on the distance of the object from the sensor.*

## Applications

- Distance Measurement
- Obstacle Detection
- Robotics
- Automatic Door Systems
- Smart Parking Systems
- Industrial Automation

## Files Included

```
arduino-ultrasonic-sensor/
│── ultrasonic_sensor.ino
│── README.md
│── circuit.png
└── output.png (Optional)
```

## Author

**Sona Catherine**

## License

This project is open-source and intended for learning and educational purposes.v
