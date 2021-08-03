#include <ESP8266WiFi.h>
#include <WiFiClient.h>;
#include <ThingSpeak.h>
const char* ssid="SHOBHA";
const char* password = "sharad1238";
#define  val A0

WiFiClient client;
unsigned long myChannelNumber=664425;
const char* myWriteAPIKey="EHRWKNVXIKJUNMC3";


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
delay(10);
WiFi.begin(ssid,password);
ThingSpeak.begin(client);
}

void loop() {
float tempval=10.55
Serial.println(tempval);
delay(1000);

ThingSpeak.writeField(myChannelNumber,1,tempval,myWriteAPIKey);
delay(100);
  
  // put your main code here, to run repeatedly:

}
