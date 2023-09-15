#include<Servo.h>

int servoPin = 3;
int waits = 1000;

Servo myServo;

void setup() {
  myServo.attach(servoPin);

}

void loop() {
  myServo.write(0);
  delay(waits);
    myServo.write(45);
  delay(waits);
    myServo.write(90);
  delay(waits);
  myServo.write(135);
  delay(waits);
  myServo.write(180);
  delay(waits);


}
