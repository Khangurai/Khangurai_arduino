int Sensorpin = A0;
int ledpin = 8;
float readvalue,mVout,tempC;

void setup() {
  pinMode(Sensorpin,INPUT);
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);


}

void loop() {
  readvalue = analogRead(Sensorpin);
  mVout = (5000.0 / 1023.0) * readvalue;
  tempC = mVout / 10;
  Serial.print("Read value is ");
  Serial.println(readvalue);
  Serial.print("Output voltage in mV: ");
  Serial.println(mVout);
  Serial.print("Temperature in C: ");
  Serial.println(tempC);
  Serial.println( );
  if(tempC > 30)
    digitalWrite(ledpin,HIGH);
  else
    digitalWrite(ledpin,LOW);
  delay(2000);

}
