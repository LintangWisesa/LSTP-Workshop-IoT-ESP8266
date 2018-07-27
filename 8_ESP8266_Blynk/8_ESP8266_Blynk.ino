#define BLYNK_PRINT SerialUSB
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "Blynk_Auth_Token";
char ssid[] = "Your_WiFi_Name";
char pass[] = "Your_WiFi_Password";

void setup(){
    SerialUSB.begin(9600);
    Blynk.begin(auth, ssid, pass);
}

void loop(){
    Blynk.run();
}