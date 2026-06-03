// Project 4: Analog Brightness Levels
// Board: Arduino Uno
// Cycles through 6 brightness levels on a red LED using PWM
// analogWrite accepts values 0 (off) to 255 (full brightness)

int redPin = 9;

// Brightness levels from full to off
int brightness1 = 255;  // full brightness
int brightness2 = 175;  // ~70%
int brightness3 = 110;  // ~43%
int brightness4 = 50;   // ~20%
int brightness5 = 10;   // ~4%
int brightness6 = 0;    // off

void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
  analogWrite(redPin, brightness1);  delay(500);
  analogWrite(redPin, brightness2);  delay(500);
  analogWrite(redPin, brightness3);  delay(500);
  analogWrite(redPin, brightness4);  delay(500);
  analogWrite(redPin, brightness5);  delay(500);
  analogWrite(redPin, brightness6);  delay(500);
}
