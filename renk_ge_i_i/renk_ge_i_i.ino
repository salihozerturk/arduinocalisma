int redPin= 11;
int greenPin = 10;
int bluePin = 9;
 
void setup() {
 
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
 
}
 
void setRGBColor(int red, int green, int blue) {
 
   analogWrite(redPin, red);
   analogWrite(greenPin, green);
   analogWrite(bluePin, blue);
 
}
 
void loop() {
 
   setRGBColor(255, 0, 0);
   delay(1000);
 
   setRGBColor(0, 255, 0); 
   delay(1000); 
 
   setRGBColor(0, 0, 255); 
   delay(1000); 
 
}
