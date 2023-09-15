
#include<Servo.h>

int servopin = 3;
int Potentiometer_pin = A0;
Servo myServo;

void setup() {
  //initialize the mode for the pins
  myServo.attach(servopin);
  pinMode(Potentiometer_pin,INPUT);
  Serial.begin(9600);

}

void loop() {
  int potentiometerValue = analogRead(Potentiometer_pin);//Read potentiometer value

  int degree = (180.0 / 1023.0) * potentiometerValue;//don't forget decimal(.0)/if whatever use int or float

  //int degree = map(potentiometerValue, 0, 1023, 0, 180);//Compute servo degree with map
  myServo.write(degree);
  
  // Convert the analog input to voltage
  //float voltage = potentiometerValue * (180.0 / 1023.0);

  Serial.print(potentiometerValue);
  Serial.print(" ");
  Serial.println(degree);
  //Serial.print(" ");
  //Serial.print(voltage);
  //Serial.println("V");
  //delay(1000);
  
  
}
