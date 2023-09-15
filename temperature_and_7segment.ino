int sensorpin = A0;
int f = 13;
int b = 12;
int e = 11;
int c = 10;
int g = 9;
int d = 8;

float readvalue,mvout,tempc;

void setup() {
  pinMode(f,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(d,OUTPUT);
 
  pinMode(sensorpin,INPUT);
  Serial.begin(9600);
  
  }

void loop() {
  readvalue = analogRead(sensorpin);
  mvout = (5000.0 / 1023.0) * readvalue;
  tempc = mvout / 10;
  Serial.println(tempc);

  if(tempc > 30){
    digitalWrite(f,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(g,HIGH);
     digitalWrite(d,LOW);
  }

  else{
    digitalWrite(f,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(g,LOW);
    digitalWrite(d,HIGH);
  }
  delay(2000);
  


}
