# Buzzer using Arduino Uno

![Arduino](https://img.shields.io/badge/Arduino-Uno-333333)
![C++](https://img.shields.io/badge/Language-C++-00534E)

A simple Arduino project that controls a **buzzer** using digital pin 8. The buzzer turns ON for 500 milliseconds and OFF for 500 milliseconds continuously.

## Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Buzzer (Active) | 1 |
| Breadboard | 1 |
| Jumper Wires | — |

## Connections

| Buzzer Pin | Arduino Pin |
|------------|-------------|
| (+) | Digital Pin 8 |
| (−) | GND |

## Working

1. Pin 8 is configured as OUTPUT.
2. `digitalWrite(8, HIGH)` activates the buzzer.
3. `delay(500)` waits 500 ms.
4. `digitalWrite(8, LOW)` deactivates the buzzer.
5. `delay(500)` waits another 500 ms.
6. The cycle repeats indefinitely.

## Code

```cpp
void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
}
```

## Output

The buzzer beeps for 500 ms, then goes silent for 500 ms, repeating continuously.

## Technologies

- Arduino Uno
- Arduino C/C++
- Tinkercad

## Learning Outcomes

- `tone()` alternative: direct HIGH/LOW buzzer control
- Timing with `delay()`
- Digital output

## License

Part of the **Actuator-Projects** repository, MIT License.
