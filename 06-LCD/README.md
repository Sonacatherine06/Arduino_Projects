# 16x2 LCD Display using Arduino Uno

![Arduino](https://img.shields.io/badge/Arduino-Uno-333333)
![C++](https://img.shields.io/badge/Language-C++-00534E)

This project displays the text **"Hello Sona"** on a 16x2 LCD using an Arduino Uno.

## Description

The LCD (Liquid Crystal Display) is a 16×2 character display capable of showing two lines of 16 characters each. The Arduino communicates with the LCD in 4-bit mode using the `LiquidCrystal.h` library.

## Components Used

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno | 1 | Main controller |
| 16x2 LCD Display | 1 | HD44780-compatible |
| 10kΩ Potentiometer | 1 | Contrast adjustment |
| Breadboard | 1 | For prototyping |
| Jumper Wires | — | For wiring |

## Connections

| LCD Pin | Arduino Pin |
|---------|-------------|
| RS | 12 |
| E | 11 |
| D4 | 5 |
| D5 | 4 |
| D6 | 3 |
| D7 | 2 |
| VSS | GND |
| VDD | 5V |
| RW | GND |
| VO | Potentiometer wiper |
| A | 5V (via resistor) |
| K | GND |

## Code

```cpp
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello Sona");
}

void loop() {
}
```

## Output

The LCD displays:

```
Hello Sona
```

## Files

- `lcd_name_display.ino` — Arduino source code

## Learning Outcomes

- LCD communication protocols (4-bit mode)
- `LiquidCrystal` library usage
- Contrast control with potentiometer

## License

Part of the **Actuator-Projects** repository, MIT License.
