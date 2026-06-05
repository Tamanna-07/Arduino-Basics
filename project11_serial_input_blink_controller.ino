// Project 11: Serial Input LED Blink Controller
// Board: Arduino Uno
// User types a number in Serial Monitor, LED blinks that many times
// Demonstrates reading integer input from serial port
// Note: uses while loop instead of for loop - both are valid approaches

int redPin  = 3;    // red LED longer leg (anode)
int wait    = 300;  // delay between blinks in ms
int numBlinks;      // number of blinks entered by user via Serial Monitor
String message = "How Many Blinks Do You Want :";

void setup() {
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(message);

  while (Serial.available() == 0) {}    // wait until user sends input

  numBlinks = Serial.parseInt();         // read integer from Serial Monitor

  // blink LED numBlinks times
  while (numBlinks > 0) {
    digitalWrite(redPin, HIGH); delay(wait);
    digitalWrite(redPin, LOW);  delay(wait);
    numBlinks = numBlinks - 1;
  }

  digitalWrite(redPin, LOW);             // ensure LED is off after blinking
}
