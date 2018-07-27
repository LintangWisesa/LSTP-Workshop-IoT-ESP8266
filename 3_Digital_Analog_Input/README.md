# **Workshop IoT with ESP8266**

![Lintang_LSTP](https://3.bp.blogspot.com/-8QBGUwbf2FA/WvvQN_M9L4I/AAAAAAAAEHk/QGSQSxcFuioZCIhcIpBkBtdzK4JKbmJawCLcBGAs/s400/default.png)

# *__3. Digital & Analog Input__*

## **3a. Digital Input :heavy_check_mark:**

  1. **Schematics :wrench: :hammer:**
      
      Assemble your parts as the schematics below.
      
      ![Digital_Input](https://raw.githubusercontent.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/master/3_Digital_Analog_Input/3_Digital_In.png)

  2. **Sketch :clipboard:**
      
      Open Arduino IDE, type & upload the sketch below.

      - Read push button's status on Serial Monitor

        ```c++
        void setup(){
          Serial.begin(115200);
          pinMode(D3, INPUT);
        }

        void loop(){
          Serial.println(digitalRead(D3));
          delay(100);  
        }
        ```

  - __Done!__ :ballot_box_with_check:

#

## **3b. Analog Input :heavy_check_mark:**

  1. **Schematics :wrench: :hammer:**

      Assemble your parts as the schematics below.

      ![Analog_Input](https://raw.githubusercontent.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/master/3_Digital_Analog_Input/3_Analog_In.png)

  2. **Sketch :clipboard:**
      
      Open Arduino IDE, type & upload the sketch below.

      - Read potentiometer's value on Serial Monitor

        ```c++
        void setup(){
          Serial.begin(115200);
        }

        void loop(){
          Serial.println(analogRead(A0));
          delay(10);
        }
        ```
      
  - __Done!__ :ballot_box_with_check:

  - __Next material: :fast_forward: *[Digital Analog Input Output](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/4_Digital_Analog_Input_Output)*__ 

#

## **Table of Contents :memo:**

  No.|Material|Tutorial
  -----|-----|-----
  0.|Initial Setup|*__[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/0_Setup)__*
  1.|Hello World!|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/1_Hello_World)**_
  2.|Digital & Analog Output|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/2_Digital_Analog_Output)**_
  3.|Digital & Analog Input|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/3_Digital_Analog_Input)**_
  4.|Analog & Digital I/O|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/4_Digital_Analog_Input_Output)**_
  5.|ESP8266 & DHT11 Sensor|_**[click here]()**_
  6.|ESP8266 WiFi Scanner|_**[click here]()**_
  7.|Connecting ESP8266 to A WiFi Network|_**[click here]()**_
  8.|ESP8266 Web Server|_**[click here]()**_
  9.|ESP8266 & Blynk|_**[click here]()**_
  10.|ESP8266 & Thinger.io|_**[click here]()**_

#

#### Lintang Wisesa :love_letter: _lintangwisesa@ymail.com_

[Facebook](https://www.facebook.com/lintangbagus) | 
[Twitter](https://twitter.com/Lintang_Wisesa) |
[Google+](https://plus.google.com/u/0/+LintangWisesa1) |
[Youtube](https://www.youtube.com/user/lintangbagus) | 
:octocat: [GitHub](https://github.com/LintangWisesa) |
[Hackster](https://www.hackster.io/lintangwisesa)
