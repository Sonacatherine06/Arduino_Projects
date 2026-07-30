int motorPin = 9;

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  digitalWrite(motorPin, HIGH);   // ON
  delay(2000);

  digitalWrite(motorPin, LOW);    // OFF
  delay(2000);
}