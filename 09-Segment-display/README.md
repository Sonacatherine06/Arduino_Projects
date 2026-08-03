# 7-Segment Display using Arduino Uno

![Arduino](https://img.shields.io/badge/Arduino-Uno-333333)
![C++](https://img.shields.io/badge/Language-C++-00534E)

This project displays digits 0–9 on a **7-segment display** using an Arduino Uno. The display cycles through all digits sequentially.

## Description

The 7-segment display has seven LED segments (a–g) plus a decimal point. By lighting different combinations of segments, each digit from 0 to 9 can be displayed. The Arduino activates the appropriate segments using direct GPIO control.

## Hardware Components

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno | 1 | Main controller |
| 7-Segment Display (Common Cathode) | 1 | 4-digit or single-digit |
| 220Ω Resistors | 7 | Current limiting for segments |
| Breadboard | 1 | For prototyping |
| Jumper wires | — | For wiring |

## Pin Connections

| Segment | Arduino Pin |
|---------|-------------|
| a | 2 |
| b | 3 |
| c | 4 |
| d | 5 |
| e | 6 |
| f | 7 |
| g | 8 |

> **Note:** This list assumes a common-cathode 7-segment display with segments a–g mapped to pins 2–8. Common cathode pins connect to GND.

## How It Works

1. A `segPins[]` array defines which Arduino pins connect to each segment (a–g).
2. A `digits[10][7]` lookup table encodes the segment pattern for each digit (0 = OFF, 1 = ON).
3. The loop iterates through digits 0–9, setting each segment pin with `digitalWrite()`.
4. Each digit is displayed for 1000 ms before advancing to the next.

## Code

```cpp
int segPins[] = {2, 3, 4, 5, 6, 7, 8};

byte digits[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,0,1,1,0,1,1}  // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segPins[i], OUTPUT);
  }
}

void loop() {
  for (int num = 0; num <= 9; num++) {
    for (int i = 0; i < 7; i++) {
      digitalWrite(segPins[i], digits[num][i]);
    }
    delay(1000);
  }
}
```

## Expected Output

The 7-segment display cycles: 0 → 1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → 9, each staying on for 1 second.

## File Structure

```
09-Segment-display/
├── README.md                 ← This file
├── Segment Display/
│   ├── Code/
│   │   └── sketch.ino        ← Arduino source code
│   ├── Images/
│   │   └── img1.png          ← Circuit/Setup photo
│   └── Video/
│       └── Recording.mp4     ← Demonstration video
```

## Learning Outcomes

- 7-segment display segment-to-digit mapping
- Lookup table implementation for segment patterns
- `digitalWrite()` and `pinMode()` in loops
- Common cathode vs common anode configurations

## Applications

- Digital clocks
- Score counters
- Numeric displays for sensors
- Timer displays

## License

Part of the **Actuator-Projects** repository, MIT License.
