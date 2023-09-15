int EN1 = 6;
int IN1 = 7;
int IN2 = 8;
int sp;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EN1, OUTPUT);
}

void loop() {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  for(sp = 0; sp<= 255; sp++){
    analogWrite(EN1 , sp);
    delay(10);
  }
  delay(1000);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);

  for(sp = 255; sp<= 0; sp--){
    analogWrite(EN1 , sp);
    delay(10);
  }
  delay(1000);
}
