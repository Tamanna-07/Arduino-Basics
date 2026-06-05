// Project 10: While Loop LED Trigger
// Board: Arduino Uno
// Red LED turns ON while potentiometer reading exceeds 1000 (approx 4.9V)
// LED turns OFF as soon as reading drops below threshold
// Demonstrates reactive behavior using while loops

int redPin   = 3;   // red LED longer leg (anode)
int readPin  = A5;  // potentiometer wiper - analog reading
int wait     = 100; // delay between readings in ms
int readValue;      // raw ADC value from potentiometer (0-1023)

void setup() {
  pinMode(readPin, INPUT);
  pinMode(redPin,  OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(readPin);
  Serial.println(readValue);
  delay(wait);

  // LED stays ON while potentiometer is turned to maximum (>1000)
  while (readValue > 1000) {
    digitalWrite(redPin, HIGH);
    readValue = analogRead(readPin);   // keep checking inside loop
    Serial.println(readValue);
    delay(wait);
  }

  digitalWrite(redPin, LOW);           // turn off when condition no longer met
}
