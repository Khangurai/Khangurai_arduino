int r = 13;
int g = 12;
int b = 11;

void setup() {
  pinMode(r , OUTPUT);
  pinMode(g , OUTPUT);
  pinMode(b , OUTPUT);
}

void loop() {
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  delay(500);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  delay(500);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  delay(500);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(500);
}
