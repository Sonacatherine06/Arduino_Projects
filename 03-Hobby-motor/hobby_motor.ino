int motor = 8;

void setup() {
  pinMode(motor, OUTPUT);
}

void loop() {
  digitalWrite(motor, HIGH); // Motor ON
  delay(3000);

  digitalWrite(motor, LOW);  // Motor OFF
  delay(3000);
}