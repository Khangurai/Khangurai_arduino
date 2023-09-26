#include <Stepper.h>
int steps = 2048;// number of steps per revolution of the stepper motor
int rpm = 15;// desired speed of the stepper motor
int sensorPin = A1;
Stepper myStepper (steps, 8,10,9,11);// create a new Stepper object
void setup() {
  myStepper.setSpeed(rpm);// set the speed of the stepper motor
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  int sensorRead = analogRead(sensorPin);

  float mVout = (5000.0 / 1023.0) * sensorRead;// convert the temperature sensor value to millivolts
  float tempC = mVout / 10;// convert the temperature sensor value to degrees Celsius

  Serial.println("Room Temperature : "+String(tempC)+"\xC2\xB0"+"C");

  if(tempC > 30){
    Serial.println("clockwise rotation");
    Serial.println(" ");
  myStepper.step(steps);// rotate the stepper motor clockwise
}else{
  Serial.println("counterclockwise rotation");
  Serial.println(" ");
  myStepper.step(-steps);// rotate the stepper motor counterclockwise
   }
}
