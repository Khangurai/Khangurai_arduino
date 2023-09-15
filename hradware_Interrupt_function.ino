const int LedPin = 12;
const int buttonPin = 2;
int x = 0, y = 0;
int ledToggle = LOW;

unsigned long button_time = 0;
unsigned long last_button_time = 0;

void setup() {
  pinMode(LedPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP );
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(buttonPin), button_ISR , CHANGE);


}

void loop() {
  Serial.print("loop ");
  Serial.print(x++ );
  Serial.println();
  delay(500);
  }

  void button_ISR(){
    button_time = millis();
    if(button_time - last_button_time > 250){
      Serial.print("Interrupt ");
      Serial.print(y++);
      Serial.println();
      ledToggle = ! ledToggle;
      digitalWrite (LedPin, ledToggle);
      last_button_time = button_time;
    }
  }

