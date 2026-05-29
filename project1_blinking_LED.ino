// Project 1: Blinking LED
// Board: Arduino Uno
// Blinks a blue LED connected to pin 13 with a 200ms interval

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
}
