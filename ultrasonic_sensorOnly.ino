int trigpin=2;
int echopin=3;
int traveltime,distance;

void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);

}

void loop() {

  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);

  traveltime = pulseIn(echopin,HIGH);

  distance = traveltime * 0.0343 /2;
  
Serial.print(traveltime);
  Serial.print("The distance fof the trageted object: ");
  Serial.print(distance);
  Serial.println("cm");

  delay(100);

}
