# **Workshop IoT with ESP8266**

![Lintang_LSTP](https://3.bp.blogspot.com/-8QBGUwbf2FA/WvvQN_M9L4I/AAAAAAAAEHk/QGSQSxcFuioZCIhcIpBkBtdzK4JKbmJawCLcBGAs/s400/default.png)

# *__5. ESP8266 & LDR Light Sensor__*

_**LDR (Light Dependent Resistor)**_ is an electronic module whose resistivity is a function of the incident electromagnetic radiation, in short: light sensitive module. They're also called as photo resistors, photo conductors or photocells. On this article, we will connect the LDR to our NodeMCU ESP8266 to monitor its value. Follow the instructions below!

  1. **Schematics :wrench: :hammer:**
      
      Assemble your parts as the schematics below.
      
      ![ESP8266 LDR](https://raw.githubusercontent.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/master/5_ESP8266_LDR/ESP8266_LDR.png)

  2. **Sketch :clipboard:**
      
      Open Arduino IDE, type & upload the sketch below. Then open its Serial Monitor on 115200 baudrate per second, to see the condition.

        - Read LDR's analog value & voltage:

          ```c++
          void setup(){
            Serial.begin(115200);
          }

          void loop(){
            int analog = analogRead(A0);
            float volt = analog * (3.3 / 1023.0);

            Serial.print("Analog: ");
            Serial.print(analog);
            Serial.print(" / Voltage: ");
            Serial.println(volt);
            delay(1000);  
          }
          ```

        - Control an LED based on LDR's value:

          ```c++
          void setup(){
            Serial.begin(115200);
            pinMode(D5, OUTPUT);
          }

          void loop(){
            int analog = analogRead(A0);
            float volt = analog * (3.3 / 1023.0);

            if(analog < 10){
              digitalWrite(D5, HIGH);
              Serial.println("Kondisi gelap, lampu dihidupkan!");
            }

            else {
              digitalWrite(D5, LOW);
              Serial.println("Kondisi terang, lampu dimatikan!");
            }  
          }
          ```

  - __Done!__ :ballot_box_with_check:

  - __Next material: :fast_forward: *[ESP8266 WiFi Scanner]()*__ 

#

## **Table of Contents :memo:**

  No.|Material|Tutorial
  -----|-----|-----
  0.|Initial Setup|*__[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/0_Setup)__*
  1.|Hello World!|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/1_Hello_World)**_
  2.|Digital & Analog Output|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/2_Digital_Analog_Output)**_
  3.|Digital & Analog Input|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/3_Digital_Analog_Input)**_
  4.|Analog & Digital I/O|_**[click here](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/4_Digital_Analog_Input_Output)**_
  5.|ESP8266 & LDR Sensor|_**[click here]()**_
  6.|ESP8266 WiFi Scanner|_**[click here]()**_
  7.|Connecting ESP8266 to A WiFi Network|_**[click here]()**_
  8.|ESP8266 & Blynk|_**[click here]()**_
  9.|ESP8266 & Thinger.io|_**[click here]()**_

#

#### Lintang Wisesa :love_letter: _lintangwisesa@ymail.com_

[Facebook](https://www.facebook.com/lintangbagus) | 
[Twitter](https://twitter.com/Lintang_Wisesa) |
[Google+](https://plus.google.com/u/0/+LintangWisesa1) |
[Youtube](https://www.youtube.com/user/lintangbagus) | 
:octocat: [GitHub](https://github.com/LintangWisesa) |
[Hackster](https://www.hackster.io/lintangwisesa)
