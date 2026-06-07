// Project 12: Serial String LED Controller
// Board: Arduino Uno
// User types a color name in Serial Monitor to turn on the corresponding LED
// Accepts "red"/"Red", "blue"/"Blue", "green"/"Green"
// Components: 3x 200 ohm resistors, red/blue/green LEDs

String color;
String message = "Which color do you want to blink ?";

int redPin   = 3;   // red LED longer leg (anode)
int bluePin  = 5;   // blue LED longer leg (anode)
int greenPin = 6;   // green LED longer leg (anode)
int wait     = 500; // delay in ms

void setup() {
  Serial.begin(9600);
  pinMode(redPin,   OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin,  OUTPUT);
}

void loop() {
  Serial.println(message);

  while (Serial.available() == 0) {}   // wait for user input

  color = Serial.readString();          // read string from Serial Monitor

  // turn on red LED, turn off others
  if (color == "red" || color == "Red") {
    digitalWrite(redPin,   HIGH);
    digitalWrite(bluePin,  LOW);
    digitalWrite(greenPin, LOW);
  }

  // turn on blue LED, turn off others
  if (color == "blue" || color == "Blue") {
    digitalWrite(redPin,   LOW);
    digitalWrite(bluePin,  HIGH);
    digitalWrite(greenPin, LOW);
  }

  // turn on green LED, turn off others
  if (color == "green" || color == "Green") {
    digitalWrite(redPin,   LOW);
    digitalWrite(bluePin,  LOW);
    digitalWrite(greenPin, HIGH);
  }
}
