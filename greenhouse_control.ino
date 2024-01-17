#include <Servo.h>
Servo myservo;
float tempReading = 0;
int moistVal = 0;
void setup() {
  myservo.attach(2);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  tempReading = analogRead(5);
  double tempK = log(10000.0 * ((1024.0 / tempReading - 1)));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK );      //Convert temperature to Kelvin
  float tempC = tempK - 273.15;                                                                 // Convert Kelvin to Celcius
  Serial.println(tempC);
  moistVal = analogRead(0);
  int percent = (moistVal) * 100L / (1023);
  Serial.println(percent);
  if (tempC >= 30) {
    //open the greenhouse
    myservo.write (30);
  }
  else {
    // close the greenhouse
    myservo.write (0);
  }
  if (percent >= 40 && percent <= 45) {
    analogWrite(5, 255);
    digitalWrite(3, 180);
  }
  else {
    analogWrite(5, 0);
  }
  delay(500);
}
