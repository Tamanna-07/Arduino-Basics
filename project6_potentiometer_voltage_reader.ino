// Project 6: Potentiometer Voltage Reader
// Board: Arduino Uno
// Reads analog voltage from a 10K ohm potentiometer on pin A5
// Turning the knob varies resistance, changing voltage from 0V to 5V
// Output is printed to Serial Monitor at 115200 baud

int readPin = A5;     // analog input pin connected to potentiometer wiper
int wait = 1000;      // delay between readings in ms
double voltage;       // converted voltage (0-5V)
int readValue;        // raw ADC value (0-1023)

void setup() {
  Serial.begin(115200);
  pinMode(readPin, INPUT);
}

void loop() {
  readValue = analogRead(readPin);         // read raw potentiometer value
  voltage = (5.0 / 1023.0) * readValue;   // convert to voltage
  Serial.println(voltage);                 // print to Serial Monitor
  delay(wait);
}
