// GET MAC ADDRESS

#ifdef ESP32
  #include <WiFi.h>
#else
  #include <ESP8266WiFi.h>
#endif

void setup(){
  Serial.begin(115200);
  Serial.println();
  Serial.print("ESP Board MAC Address:  ");
  Serial.println(WiFi.macAddress());
}
 
void loop(){
  Serial.println("Loop artifact v3");
  delay(1000);
}

/*

MAC
94:B5:55:8E:39:50


MAC ID419 HIDROTOR
30:C6:F7:F3:48:20

*/