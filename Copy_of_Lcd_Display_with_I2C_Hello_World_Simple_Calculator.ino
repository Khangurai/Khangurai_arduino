#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int t=3000;
// calculator variables
float firstNum;
float secNum;
float answer;
String op;


void setup()
{
lcd.begin(16,2);
lcd.init();
lcd.backlight();
Serial.begin(9600);
}

void loop(){
// 1st NUmber
lcd.setCursor(0,0);
lcd.print("Input 1st Number");
while(Serial.available()==0)
{
 
}
firstNum=Serial.parseFloat();
lcd.clear();
 
// 2nd NUmber
lcd.setCursor(0,0);
lcd.print("Input 2nd Number");
while(Serial.available()==0)
{
 
}
secNum=Serial.parseFloat();
lcd.clear();

// Operation
lcd.setCursor(0,0);
lcd.print("Input Operator");
lcd.setCursor(0,1);
lcd.print("+,-,*,/");
while(Serial.available()==0)
{
 
}
op=Serial.readString();
lcd.clear();
// Operation Statements
if(op=="+")
{
 answer=firstNum+secNum;
}
if(op=="-")
{
 answer=firstNum-secNum;
}
  
if(op=="*")
{
 answer=firstNum*secNum;
} 
  
if(op=="/")
{
 answer=firstNum/secNum;
} 
lcd.setCursor(0,0);
lcd.print(firstNum);
lcd.print(op);
lcd.print(secNum);
lcd.print("=");
lcd.print(answer);

lcd.setCursor(0,1);
lcd.print("ok? Y");
while(Serial.available()==0)
{
  
}
Serial.readString();
lcd.clear();
}