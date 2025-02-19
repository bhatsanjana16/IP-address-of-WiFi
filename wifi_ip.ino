#include <WiFi.h>
const char* ssid = "hotspot";
const char* password="11223344";
int led=32;
void setup(void)
{
  pinMode(led,OUTPUT);
  Serial.begin(115200);
  WiFi.begin(ssid,password);
  while(WiFi.status()!=WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");


  }
  Serial.print("");
  Serial.println("WiFi Connected");
  Serial.println(WiFi.localIP());
}
void loop()
{
if(WiFi.status()!=WL_CONNECTED){
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);
  Serial.print("wifi is not connected");


}
else{
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);


}
}
