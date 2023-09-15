int ledpin = 12;
int VSpin = 3;

void setup() {
  pinMode(ledpin, OUTPUT);
  pinMode(VSpin,INPUT);
  Serial.begin(9600);

}

void loop() {

  long int readval= Vibration_sensor();
  delay(100);
  Serial.print("vibration Measurement: ");
  Serial.println(readval);

  if(readval > 100){
    digitalWrite(ledpin,HIGH);

  }
  else{
    digitalWrite(ledpin,LOW);
  }
  

}
long int Vibration_sensor(){
  long int measurement = pulseIn(VSpin,HIGH);
  return measurement;
}
