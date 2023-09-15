// Joystick LED Control

// Pin definitions
const int joystickXPin = A0;
//const int joystickYPin = A1;

const int led1Pin = 2;
const int led2Pin = 3;

// Variables
int joystickXValue;
//int joystickYValue;

void setup() {
  // Initialize the serial port
  Serial.begin(9600);

  // Set the LED pins as outputs
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}

void loop() {
  // Read the joystick values
  joystickXValue = analogRead(joystickXPin);
  //joystickYValue = analogRead(joystickYPin);

  Serial.print("X: ");
  Serial.println(joystickXPin);
  //Serial.print(" ");
  //Serial.print("Y: ");
  //Serial.println(joystickYPin);

  // Control the LEDs based on the joystick tilt direction
  if (joystickXValue < 512) {
    // Joystick is tilted to the left
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, LOW);
  } else if (joystickXValue > 512) {
    // Joystick is tilted to the right
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2Pin, HIGH);
  }/*else if (joystickYValue > 512) {
    // Joystick is tilted to the right
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, LOW);
  }else if (joystickYValue > 512) {
    // Joystick is tilted to the right
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, LOW);
  }*/else {
    // Joystick is centered
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2Pin, LOW);
  }
}