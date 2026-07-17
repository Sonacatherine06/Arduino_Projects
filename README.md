# Arduino LED Blink

## Overview
This project demonstrates how to blink an LED using an Arduino Uno. The LED turns ON for one second and OFF for one second continuously.

## Components Required
- Arduino Uno R3
- LED
- 220 Ω Resistor
- Jumper Wires

## Circuit
The LED is connected to Digital Pin 13 through a 220 Ω resistor.

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
The LED blinks every one second.

## Software Used
- Arduino IDE
- Tinkercad
