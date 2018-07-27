#include <ESP8266WiFi.h>
#include <ThingerESP8266.h>

#define USERNAME "your_thinger_username"    // Thinger username
#define DEV_ID "your_device_id"             // Thinger device ID
#define DEV_CRED "your_device_credential"   // Thinger device credential

#define SSID "your_wifi_name"               // wifi SSID
#define SSID_PASSWORD "your_wifi_password"  // wifi password

ThingerESP8266 thing(USERNAME, DEV_ID, DEV_CRED);

void setup() {
    pinMode(D5, OUTPUT);
    thing.add_wifi(SSID, SSID_PASSWORD);
    thing["led"] << digitalPin(D5);
    // thing["led"] << analogPin(D5);
    thing["pot"] >> outputValue(analogRead(A0));
}

void loop() {
    thing.handle();
}