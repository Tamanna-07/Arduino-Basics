// Project 13: RGB Mood Lamp with Dual Control Modes
// Board: Arduino Uno
// Mode 1 (Serial): type a color and brightness (0-255) to control LEDs manually
// Mode 2 (Potentiometer): turn knob to cycle through red, green, blue zones with brightness control
// Components: 10K potentiometer, 3x 200 ohm resistors, red/blue/green LEDs

int redPin   = 3;   // red LED anode
int bluePin  = 5;   // blue LED anode
int greenPin = 6;   // green LED anode
int readPin  = A5;  // potentiometer wiper
int readValue;      // raw ADC value (0-1023)
int ledValue;       // PWM brightness value (0-255)
String welcome = "Choose Mode:";
String mode1   = "[1] Serial Monitor";
String mode2   = "[2] Potentiometer";
String choice;      // user mode selection
String color;       // user color selection (mode 1)
int wait = 500;

void setup() {
  Serial.begin(9600);
  pinMode(redPin,   OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin,  OUTPUT);
  pinMode(readPin,  INPUT);
}

void loop() {
  readValue = analogRead(readPin);

  // display mode selection menu
  Serial.println(welcome);
  Serial.println(mode1);
  Serial.println(mode2);
  while (Serial.available() == 0) {}
  choice = Serial.readString();

  // mode 1: manual serial control
  if (choice == "1") {
    Serial.println("Which Color?");
    while (Serial.available() == 0) {}
    color = Serial.readString();
    Serial.println("Brightness ? (0 - 255)");
    while (Serial.available() == 0) {}
    ledValue = Serial.parseInt();

    if (color == "Red" || color == "red") {
      analogWrite(redPin,   ledValue);
      digitalWrite(bluePin,  LOW);
      digitalWrite(greenPin, LOW);
    }
    if (color == "Blue" || color == "blue") {
      analogWrite(bluePin,  ledValue);
      digitalWrite(redPin,   LOW);
      digitalWrite(greenPin, LOW);
    }
    if (color == "Green" || color == "green") {
      analogWrite(greenPin, ledValue);
      digitalWrite(redPin,   LOW);
      digitalWrite(bluePin,  LOW);
    }
  }

  // mode 2: potentiometer control
  // continuously reads potentiometer until new serial input received
  if (choice == "2") {
    while (Serial.available() == 0) {
      readValue = analogRead(readPin);

      // zone 1: red (0-340), brightness increases left to right
      if (readValue >= 0 && readValue <= 340) {
        ledValue = (255.0 / 340.0) * readValue;
        analogWrite(redPin,   ledValue);
        digitalWrite(bluePin,  LOW);
        digitalWrite(greenPin, LOW);
      }
      // zone 2: green (341-681), brightness increases left to right
      if (readValue >= 341 && readValue <= 681) {
        ledValue = (255.0 / 340.0) * (readValue - 341);
        analogWrite(greenPin, ledValue);
        digitalWrite(bluePin,  LOW);
        digitalWrite(redPin,   LOW);
      }
      // zone 3: blue (682-1023), brightness increases left to right
      if (readValue >= 682 && readValue <= 1023) {
        ledValue = (255.0 / 341.0) * (readValue - 682);
        analogWrite(bluePin,  ledValue);
        digitalWrite(greenPin, LOW);
        digitalWrite(redPin,   LOW);
      }
      delay(50);
    }
  }
}
