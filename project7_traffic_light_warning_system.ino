// Project 7: Potentiometer Traffic Light Warning System
// Board: Arduino Uno
// Reads voltage from a 10K potentiometer and lights up one of three LEDs
// based on voltage threshold - green (safe), yellow (warning), red (danger)
// Components: 10K potentiometer, 3x 200 ohm resistors, red/yellow/green LEDs

int readPin   = A5;  // potentiometer wiper
int redPin    = 9;   // danger zone LED (voltage > 4.0V)
int yellowPin = 10;  // warning zone LED (3.0V - 4.0V)
int greenPin  = 11;  // safe zone LED (voltage <= 3.0V)
int wait      = 250;
int readValue;
double voltage;

void setup() {
  pinMode(readPin,   INPUT);
  pinMode(redPin,    OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin,  OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(readPin);
  voltage = (5.0 / 1023.0) * readValue;
  Serial.print("Potentiometer Voltage is ");
  Serial.println(voltage);

  if (voltage <= 3.0) {                        // safe zone
    digitalWrite(greenPin,  HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin,    LOW);
  }
  if (voltage > 3.0 && voltage <= 4.0) {       // warning zone
    digitalWrite(greenPin,  LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(redPin,    LOW);
  }
  if (voltage > 4.0) {                         // danger zone
    digitalWrite(greenPin,  LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin,    HIGH);
  }

  delay(wait);
}
