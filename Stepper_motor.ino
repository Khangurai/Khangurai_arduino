#include <Stepper.h>

int steps = 2048;
int rpm = 15;

Stepper myStepper (steps, 8,10,9,11);

void setup() {

  myStepper.setSpeed(rpm);
  Serial.begin(9600);

}

void loop() {
  Serial.println("clockwise rotation");
  myStepper.step(steps);
  //delay(1000);
  Serial.println("counterclockwise rotation");
  myStepper.step(-steps);
  //delay(1000);

}
