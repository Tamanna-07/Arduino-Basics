// Project 9: LED Blink Counter with For Loops
// Board: Arduino Uno
// Uses for loops to blink blue LED 5 times then red LED 2 times, repeating
// Demonstrates cleaner, scalable code compared to manual repetition

int redPin  = 9;   // red LED longer leg (anode)
int bluePin = 6;   // blue LED longer leg (anode)
int wait      = 500;  // delay between blinks in ms
int blueBlink = 5;    // number of times blue LED blinks
int redBlink  = 2;    // number of times red LED blinks
int j;                // loop counter variable

void setup() {
  pinMode(bluePin, OUTPUT);
  pinMode(redPin,  OUTPUT);
}

void loop() {
  // blink blue LED blueBlink times
  for (j = 1; j <= blueBlink; j = j + 1) {
    digitalWrite(bluePin, HIGH); delay(wait);
    digitalWrite(bluePin, LOW);  delay(wait);
  }

  // blink red LED redBlink times
  for (j = 1; j <= redBlink; j = j + 1) {
    digitalWrite(redPin, HIGH); delay(wait);
    digitalWrite(redPin, LOW);  delay(wait);
  }
}
