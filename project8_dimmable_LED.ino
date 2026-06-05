// Project 8: Dimmable LED
// Board: Arduino Uno
// Potentiometer controls LED brightness in real time using PWM
// Turning the knob maps 0-5V input to 0-255 PWM output

int readPin = A5;  // potentiometer middle leg (wiper) - takes voltage reading
int bluePin = 3;   // blue LED longer leg (anode) - takes PWM input
int readValue;     // raw ADC value from potentiometer (0-1023)
double ledValue;   // mapped brightness value (0-255)

void setup() {
  pinMode(bluePin, OUTPUT);
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(readPin);               // read potentiometer
  ledValue = (255.0 / 1023.0) * readValue;       // map to PWM range
  analogWrite(bluePin, ledValue);                // set LED brightness
}
