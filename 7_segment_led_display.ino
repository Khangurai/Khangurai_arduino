int vout= A0;
int A = 13;
int B = 12;
int C = 11;
int D = 10;
int E = 9;
int F = 8;
int G = 7;
int led=6;
int time =550 ;
//int sensorValue=0;//


void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(vout,INPUT);
  Serial.begin(9600);

}

  
  void loop() {
     /*sensorValue = analogRead(sensor);
  time = 10 + (sensorValue * (690.0 / 1023.0));*/
  int voutread = analogRead(vout);
  digitalWrite(led,HIGH);
  delay(time);
  digitalWrite(led,LOW);
  delay(time);
  Serial.print("voltage is : ");
  Serial.print(vout);
  Serial.println( );
//0
  digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
  
  delay(time);

//1
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);

  delay(time);

//2
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);

  delay(time);
//3
  digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);

  delay(time);
//4
  digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);

  delay(time);
//5
  digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);

  delay(time);
//6
  digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);

  delay(time);
//7
  digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);

  delay(time);
//8
  digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);

  delay(time);
//9
  digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);

  delay(time);
}
