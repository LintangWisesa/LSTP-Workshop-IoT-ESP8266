# **Workshop IoT with ESP8266**

![Lintang_LSTP](https://3.bp.blogspot.com/-8QBGUwbf2FA/WvvQN_M9L4I/AAAAAAAAEHk/QGSQSxcFuioZCIhcIpBkBtdzK4JKbmJawCLcBGAs/s400/default.png)

# *__2. Digital & Analog Output__*

## **2a. Digital Output :heavy_check_mark:**

  1. **Schematics :wrench: :hammer:**
  
      ![Digital_Output](https://1.bp.blogspot.com/-zrOyo9U3rqE/Wv55xcXGGOI/AAAAAAAAEKQ/9-0T0Hp73xU5WmoP2otdS6mQU8oC8SfcgCLcBGAs/s640/a2.png)

  2. **Sketch :clipboard:**
      
      ```c++
      void setup(){
        pinMode(D5, OUTPUT);
      }

      void loop(){
        digitalWrite(D5, HIGH);
        delay(1000);
        digitalWrite(D5, LOW);
        delay(1000);  
      }
      ```

  - __Done!__ :ballot_box_with_check:

## **2a. Analog Output :heavy_check_mark:**

  1. **Schematics :wrench: :hammer:**
  
      ![Analog_Output](https://2.bp.blogspot.com/-BqdZrOo1Ykk/Wv55xRn2apI/AAAAAAAAEKM/js1mpV3aL_kJF2O1yC5_zK-pDR2kk1iKQCLcBGAs/s640/a1.png)

  2. **Sketch :clipboard:**
      
      ```c++
      void setup(){
        pinMode(D5, OUTPUT);
      }

      void loop(){
        for(int i=0; i<256; i++){
          analogWrite(D5, i);
          delay(10);
        }
      }
      ```

  - __Done!__ :ballot_box_with_check:

  - __Next material: :fast_forward: *[Digital & Analog Input]()*__ 

#

## **Table of Contents :memo:**

  No.|Material|Tutorial
  -----|-----|-----
  0.|Initial Setup|*__[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/0_Setup)__*
  1.|Hello World!|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/1_Hello_World)**_
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
