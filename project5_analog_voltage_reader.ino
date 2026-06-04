// Project 5: Analog Voltage Reader
// Board: Arduino Uno
// Reads analog voltage from a voltage divider circuit (two 200 ohm resistors)
// and prints the real voltage to the Serial Monitor
// Expected readings: 5V (before R1), ~2.5V (between R1 and R2), 0V (after R2)

int readPin = A3;       // analog input pin
int readValue;          // raw ADC value (0-1023)
double voltage2 = 0;    // converted voltage (0-5V)
int wait = 1000;        // delay between readings in ms

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600);     // start serial communication at 9600 baud
}

void loop() {
  readValue = analogRead(readPin);           // read raw value (0-1023)
  voltage2 = (5.0 / 1023.0) * readValue;    // convert to voltage
  Serial.println(voltage2);                  // print to Serial Monitor
  delay(wait);
}
