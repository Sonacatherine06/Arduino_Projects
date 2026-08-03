# LED Blink using Arduino Uno

![Arduino](https://img.shields.io/badge/Arduino-Uno-333333)
![C++](https://img.shields.io/badge/Language-C++-00534E)

This project demonstrates how to blink an LED using an Arduino Uno. The LED turns ON for 1 second and OFF for 1 second continuously.

## Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Uno R3 | 1 |
| LED | 1 |
| 220 Ω Resistor | 1 |
| Jumper Wires | — |

## Circuit

The LED is connected to **Digital Pin 13** through a 220 Ω resistor. Pin 13 has a built-in LED on most Arduino Uno boards, so an external LED is optional.

### Wiring

```
LED (Anode) → 220Ω Resistor → Digital Pin 13
LED (Cathode) → GND
```

## Arduino Code

```cpp
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
```

## Output

The LED blinks every one second (1s ON, 1s OFF).

## Software Used

- Arduino IDE
- Tinkercad (for circuit simulation)

## Learning Outcomes

- `pinMode()`, `digitalWrite()` basics
- Timing with `delay()`
- Digital output control

## License

Part of the **Actuator-Projects** repository, MIT License.
