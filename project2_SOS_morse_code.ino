// Project 2: SOS Morse Code
// Board: Arduino Uno
// Blinks a red LED in SOS pattern using variables for timing
// dit = 250ms, dah = 700ms, wait = 2000ms between cycles

int myPin = 13;
int time1 = 250;
int time2 = 700;
int wait = 2000;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  // S - dit dit dit
  digitalWrite(myPin, HIGH); delay(time1);
  digitalWrite(myPin, LOW);  delay(time1);
  digitalWrite(myPin, HIGH); delay(time1);
  digitalWrite(myPin, LOW);  delay(time1);
  digitalWrite(myPin, HIGH); delay(time1);
  digitalWrite(myPin, LOW);  delay(time1);

  // O - dah dah dah
  digitalWrite(myPin, HIGH); delay(time2);
  digitalWrite(myPin, LOW);  delay(time2);
  digitalWrite(myPin, HIGH); delay(time2);
  digitalWrite(myPin, LOW);  delay(time2);
  digitalWrite(myPin, HIGH); delay(time2);
  digitalWrite(myPin, LOW);  delay(time2);

  // S - dit dit dit
  digitalWrite(myPin, HIGH); delay(time1);
  digitalWrite(myPin, LOW);  delay(time1);
  digitalWrite(myPin, HIGH); delay(time1);
  digitalWrite(myPin, LOW);  delay(time1);
  digitalWrite(myPin, HIGH); delay(time1);
  digitalWrite(myPin, LOW);  delay(wait);
}
