#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9);   // Signal pin connected to Digital Pin 9
}

void loop() {
  // Move from 0° to 180°
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle);
    delay(15);
  }

  // Move from 180° back to 0°
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle);
    delay(15);
  }
}