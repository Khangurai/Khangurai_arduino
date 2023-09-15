int pinled = 12;
int button1 = 2 , button2 = 3 , button3 = 4;
int state1 , state2 , state3;

void setup(){

  pinMode(pinled , OUTPUT);
  pinMode(button1 , INPUT);
  pinMode(button2 , INPUT);
  pinMode(button3 , INPUT);

}

void loop(){

  state1 = digitalRead(button1);
  state2 = digitalRead(button2);
  state3 = digitalRead(button3);

  if(state1 == LOW || state2 == LOW || state3 == LOW){

    digitalWrite(pinled , HIGH);
  }
  else{
    digitalWrite(pinled , LOW);
  }
}