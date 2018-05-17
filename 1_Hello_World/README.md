# **Workshop IoT with ESP8266**

![Lintang_LSTP](https://3.bp.blogspot.com/-8QBGUwbf2FA/WvvQN_M9L4I/AAAAAAAAEHk/QGSQSxcFuioZCIhcIpBkBtdzK4JKbmJawCLcBGAs/s400/default.png)

# *__1. Hello World!__*

## **See Messages on Serial Monitor :heavy_check_mark:**

  1. First, connect ESP8266 NodeMCU to your laptop via USB cable. 
  
  2. Open Arduino IDE, then set board & port as follow:
    
      - Go to **_Tools - Board_** and choose **_NodeMCU 1.0 (ESP-12E Module)_**.
    
      - Go to _**Tools - Port**_ and choose the appropriate port, e.g. __COM5__.
  
  3. Type sketch below:

      ```c++
      void setup() {
        Serial.begin(115200);
        Serial.println("Hello World!");
        delay(2000);
      }

      void loop() {
        Serial.println("Ini pesan loop");
        delay(1000);
      }
      ```
  4. Click __*Upload :arrow_right:*__ button, wait until uploading process done. Click __*Serial Monitor :mag_right:*__ button, set baudrate on _**115200 baud**_ and you will see these kind of messages on Serial Monitor:

      ![Lintang_Serial_Monitor](https://1.bp.blogspot.com/-RmEiAnUMH4U/Wv0zUX-cggI/AAAAAAAAEJo/17BCYt-8AwAPBpiZjEf9--hY8_On-tlWgCLcBGAs/s640/z6.png)

  - __Done!__ :ballot_box_with_check:

  - __Next material: :fast_forward: *[Digital & Analog Output]()*__ 

#

## **Table of Contents :memo:**

  No.|Material|Tutorial
  -----|-----|-----
  0.|Initial Setup|*__[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/0_Setup)__*
  1.|Hello World!|*Coming Soon*
  2.|Digital & Analog Output|*Coming Soon*
  3.|Digital & Analog Input|*Coming Soon*
  4.|Analog & Digital I/O|*Coming Soon*
  5.|ESP8266 & DHT11 Sensor|*Coming Soon*
  6.|ESP8266 WiFi Scanner|*Coming Soon*
  7.|Connecting ESP8266 to A WiFi Network|*Coming Soon*
  8.|ESP8266 Web Server|*Coming Soon*
  9.|ESP8266 & Blynk|*Coming Soon*
  10.|ESP8266 & Thinger.io|*Coming Soon*

#

#### Lintang Wisesa :love_letter: _lintangwisesa@ymail.com_

[Facebook](https://www.facebook.com/lintangbagus) | 
[Twitter](https://twitter.com/Lintang_Wisesa) |
[Google+](https://plus.google.com/u/0/+LintangWisesa1) |
[Youtube](https://www.youtube.com/user/lintangbagus) | 
:octocat: [GitHub](https://github.com/LintangWisesa) |
[Hackster](https://www.hackster.io/lintangwisesa)
