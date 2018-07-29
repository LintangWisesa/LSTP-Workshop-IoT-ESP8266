# **Workshop IoT with ESP8266**

![Lintang_LSTP](https://3.bp.blogspot.com/-8QBGUwbf2FA/WvvQN_M9L4I/AAAAAAAAEHk/QGSQSxcFuioZCIhcIpBkBtdzK4JKbmJawCLcBGAs/s400/default.png)

# *__8. ESP8266 & Blynk__*

![Blynk](https://solutionsdirectory.intel.com/sites/default/files/shared/styles/company_logo_for_solution/public/solutions/Blynk_logo_title.png)

_**Blynk**_ is an IoT platform that allows you to quickly build interfaces for controlling and monitoring your hardware projects from your iOS and Android device. After downloading the Blynk app, you can create a project dashboard and arrange buttons, sliders, graphs, and other widgets onto the screen. Using the widgets, you can turn pins on and off or display data from sensors. More information click [Blynk.cc](https://www.blynk.cc/).

### **1. What You Need** :gift:

To build this project, you need the following items:
- 1 NodeMCU ESP8266 board
- 1 LED
- 1 Potentiometer
- 1 breadboard
- some jumper wires
- Arduino IDE ([download here](https://www.arduino.cc/en/Main/Software))
- Blynk mobile app 
  - Android ([download here](https://play.google.com/store/apps/details?id=cc.blynk))
  - iOS ([download here](https://itunes.apple.com/us/app/blynk-control-arduino-raspberry/id808760481?ls=1&mt=8))
- Blynk Arduino library ([download here](https://github.com/blynkkk/blynk-library/releases/tag/v0.5.3))

#

### **2. Setup Blynk App** :iphone:

- Open Blynk app, login then create a new project. Choose device: __NodeMCU ESP8266__ with connection type: __WiFi__. Click __Create__ button & you will receive __Blynk Auth Token__ by email.

- On your project, add a button widget (to control the LED) & a gauge (to monitor the potentiometer). Set each widget as the picture below.

  ![Blynk App](https://raw.githubusercontent.com/LintangWisesa/Arduino_MKR1000_Blynk/master/Blynk_App.png)

#

### **3. Schematics** :wrench::hammer:

- Connect your parts to NodeMCU as the following picture:

  ![NodeMCU Blynk schematics](https://raw.githubusercontent.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/master/4_Digital_Analog_Input_Output/4_Analog_InOut.png)

#

### **4. Sketch** :clipboard:
 
- First, extract _**Blynk**_ library then copy it to _C:\\...\Documents\Arduino\libraries_.

- Open Arduino IDE then copy sketch below. Insert your WiFi SSID, WiFi password & Blynk Auth Token. Make sure you have chosen the right option for **_Board_** and **_Port_** under **_Tools_** menu. Upload it!

    ```c++
    #include <ESP8266WiFi.h>
    #include <BlynkSimpleEsp8266.h>

    char auth[] = "Blynk_Auth_Token";
    char ssid[] = "Your_WiFi_Name";
    char pass[] = "Your_WiFi_Password";

    void setup(){
        Blynk.begin(auth, ssid, pass);
    }

    void loop(){
        Blynk.run();
    }
    ```

  - __Done!__ :ballot_box_with_check:

  - __Next material: :fast_forward: *[ESP8266 & Thinger](https://github.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/tree/master/9_ESP8266_Thinger)*__ 

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
