# **Workshop IoT with ESP8266**

![Lintang_LSTP](https://3.bp.blogspot.com/-8QBGUwbf2FA/WvvQN_M9L4I/AAAAAAAAEHk/QGSQSxcFuioZCIhcIpBkBtdzK4JKbmJawCLcBGAs/s400/default.png)

# *__7. Connecting ESP8266 to a WiFi Network__*

  **Sketch :clipboard:**
      
  Open Arduino IDE, type & upload the sketch below. Then open its Serial Monitor on 115200 baudrate per second, to see the result.

  ```c++
  #include "ESP8266WiFi.h" 
 
  void setup() {
    Serial.begin(115200);
  } 
  
  void loop() {
    delay(2000);
    WiFi.disconnect();
    Serial.println("Mulai menghubungkan");
    WiFi.begin("nama_wifi","password_wifi");
    while((!(WiFi.status() == WL_CONNECTED))){
      delay(300);
      Serial.print("...");
    }
    Serial.println(WiFi.status());
    Serial.println("Terhubung");
    Serial.println("");
  }
  ```

  - __Done!__ :ballot_box_with_check:

  - __Next material: :fast_forward: *[ESP8266 & Blynk](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/8_ESP8266_Blynk)*__ 

#

## **Table of Contents :memo:**

  No.|Material|Tutorial
  -----|-----|-----
  0.|Initial Setup|*__[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/0_Setup)__*
  1.|Hello World!|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/1_Hello_World)**_
  2.|Digital & Analog Output|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/2_Digital_Analog_Output)**_
  3.|Digital & Analog Input|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/3_Digital_Analog_Input)**_
  4.|Analog & Digital I/O|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/4_Digital_Analog_Input_Output)**_
  5.|ESP8266 & LDR Sensor|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/5_ESP8266_LDR)**_
  6.|ESP8266 WiFi Scanner|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/6_ESP8266_WiFi_Scanner)**_
  7.|Connecting ESP8266 to A WiFi Network|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/7_Connect_to_A_WiFi)**_
  8.|ESP8266 & Blynk|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/8_ESP8266_Blynk)**_
  9.|ESP8266 & Thinger.io|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/9_ESP8266_Thinger)**_

#

#### Lintang Wisesa :love_letter: _lintangwisesa@ymail.com_

[Facebook](https://www.facebook.com/lintangbagus) | 
[Twitter](https://twitter.com/Lintang_Wisesa) |
[Google+](https://plus.google.com/u/0/+LintangWisesa1) |
[Youtube](https://www.youtube.com/user/lintangbagus) | 
:octocat: [GitHub](https://github.com/LintangWisesa) |
[Hackster](https://www.hackster.io/lintangwisesa)
