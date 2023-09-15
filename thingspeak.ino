#include <SoftwareSerial.h>
String apikey = "JIW65RGDAFA3QIKH";
int lm35Pin = A0;  
SoftwareSerial ser(2,3); 
void setup() {   
  Serial.begin(115200);   
  ser.begin(115200);   
  ser.println("AT+RST");  
}  
void loop() {   
  int val = 0;   
  val = analogRead(lm35Pin);   
  float mv = (val/1023.0)*5000;   
  float cel = (mv/10);    
  char buf[16];   
  String strTemp = dtostrf(cel, 4, 1, buf);    
  Serial.println(strTemp);    
  String cmd = "AT+CIPSTART=\"TCP\",\"";   
  cmd += "184.106.153.149";   
  cmd += "\",80";   
  ser.println(cmd);    
  if(ser.find("Error"))
  {     
    Serial.println("AT+CIPSTART error");     
    return;   
    }    
    String getStr = "GET/update?api_key=";   
    getStr += apikey;   
    getStr +="&field1=";   
    getStr += String(getStr.length());   
    getStr += "\r\n\r\n";
    cmd = "AT+CIPSEND=";
    cmd +=String(getStr.length());

 

    ser.println(cmd);    
    if(ser.find(">"))
    {     
      ser.print(getStr);   
    }   
    else
    {     
      ser.println("AJ+CIPCLOSE");     
      Serial.println("AT+CIPCLOSE");   
    }    
    delay(20000);    
    }

