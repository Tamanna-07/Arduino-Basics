// Project 3: Binary Counter (0-15) using 4 LEDs
// Board: Arduino Uno
// 4 LEDs represent a 4-bit binary number, counting from 0 to 15

int red = 13;   // bit 3 (most significant)
int blue = 12;  // bit 2
int green = 11; // bit 1
int red2 = 10;  // bit 0 (least significant)
int wait = 1000;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red2, OUTPUT);
}

void loop() {

  // 0 = 0000
  digitalWrite(red, LOW); 
  digitalWrite(blue, LOW);  
  digitalWrite(green, LOW);  
  digitalWrite(red2, LOW);  
  delay(wait);

  // 1 = 0001
  digitalWrite(red, LOW);  
  digitalWrite(blue, LOW);  
  digitalWrite(green, LOW);  
  digitalWrite(red2, HIGH); 
  delay(wait);

  // 2 = 0010
  digitalWrite(red, LOW);  
  digitalWrite(blue, LOW);  
  digitalWrite(green, HIGH); 
  digitalWrite(red2, LOW);  
  delay(wait);

  // 3 = 0011
  digitalWrite(red, LOW);  
  digitalWrite(blue, LOW);  
  digitalWrite(green, HIGH); 
  digitalWrite(red2, HIGH); 
  delay(wait);

  // 4 = 0100
  digitalWrite(red, LOW);  
  digitalWrite(blue, HIGH); 
  digitalWrite(green, LOW);  
  digitalWrite(red2, LOW);  
  delay(wait);

  // 5 = 0101
  digitalWrite(red, LOW);  
  digitalWrite(blue, HIGH); 
  digitalWrite(green, LOW);  
  digitalWrite(red2, HIGH); 
  delay(wait);

  // 6 = 0110
  digitalWrite(red, LOW);  
  digitalWrite(blue, HIGH); 
  digitalWrite(green, HIGH); 
  digitalWrite(red2, LOW);  
  delay(wait);

  // 7 = 0111
  digitalWrite(red, LOW);  
  digitalWrite(blue, HIGH); 
  digitalWrite(green, HIGH); 
  digitalWrite(red2, HIGH); 
  delay(wait);

  // 8 = 1000
  digitalWrite(red, HIGH); 
  digitalWrite(blue, LOW);  
  digitalWrite(green, LOW);  
  digitalWrite(red2, LOW);  
  delay(wait);

  // 9 = 1001
  digitalWrite(red, HIGH); 
  digitalWrite(blue, LOW);  
  digitalWrite(green, LOW);  
  digitalWrite(red2, HIGH); 
  delay(wait);

  // 10 = 1010
  digitalWrite(red, HIGH); 
  digitalWrite(blue, LOW);  
  digitalWrite(green, HIGH); 
  digitalWrite(red2, LOW);  
  delay(wait);

  // 11 = 1011
  digitalWrite(red, HIGH); 
  digitalWrite(blue, LOW);  
  digitalWrite(green, HIGH); 
  digitalWrite(red2, HIGH); 
  delay(wait);

  // 12 = 1100
  digitalWrite(red, HIGH); 
  digitalWrite(blue, HIGH); 
  digitalWrite(green, LOW);  
  digitalWrite(red2, LOW);  
  delay(wait);

  // 13 = 1101
  digitalWrite(red, HIGH); 
  digitalWrite(blue, HIGH); 
  digitalWrite(green, LOW);  
  digitalWrite(red2, HIGH); 
  delay(wait);

  // 14 = 1110
  digitalWrite(red, HIGH); 
  digitalWrite(blue, HIGH); 
  digitalWrite(green, HIGH); 
  digitalWrite(red2, LOW);  
  delay(wait);

  // 15 = 1111
  digitalWrite(red, HIGH); 
  digitalWrite(blue, HIGH); 
  digitalWrite(green, HIGH); 
  digitalWrite(red2, HIGH); 
  delay(wait);
}
