int pinled[4] = {3,5,6,9};
void setup() {
  pinMode(pinled[4],OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int brightness = 0;
  // put your main code here, to run repeatedly:
  while(brightness <=255){
    analogWrite(pinled[4], brightness);
    brightness += 50;
    delay(100);
  }
  delay(1500);

}
