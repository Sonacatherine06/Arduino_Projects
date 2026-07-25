# Arduino 16x2 LCD Name Display

## Description
This project displays the text "Hello Sona" on a 16x2 LCD using an Arduino Uno.

## Components Used
- Arduino Uno
- 16x2 LCD Display
- Breadboard
- Jumper Wires
- 10k Potentiometer (for LCD contrast)

## Connections
- RS → Pin 12
- E → Pin 11
- D4 → Pin 5
- D5 → Pin 4
- D6 → Pin 3
- D7 → Pin 2
- VSS → GND
- VDD → 5V
- RW → GND
- VO → Potentiometer
- A → 5V (through resistor if required)
- K → GND

## Output
The LCD displays:

Hello Sona

## Arduino Code
Upload the `lcd_name_display.ino` file to an Arduino Uno.