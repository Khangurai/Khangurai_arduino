int ldrpin = A0;
int ledpin = 8;
int readvalue;
int threshold = 70;
int wait = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(ldrpin , INPUT);
  pinMode(ledpin, OUTPUT);


}

void loop() {

  readvalue = analogRead(ldrpin);
  Serial.println(readvalue);

  if(readvalue > threshold){
    digitalWrite(ledpin,LOW);

  }
  else{
    digitalWrite(ledpin,HIGH);
  }

}
