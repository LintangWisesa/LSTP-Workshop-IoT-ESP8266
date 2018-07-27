# **Workshop IoT with ESP8266**

![Lintang_LSTP](https://3.bp.blogspot.com/-8QBGUwbf2FA/WvvQN_M9L4I/AAAAAAAAEHk/QGSQSxcFuioZCIhcIpBkBtdzK4JKbmJawCLcBGAs/s400/default.png)

# *__9. ESP8266 & Thinger__*

![Thinger](https://www.thinger.io/wp-content/uploads/2015/03/platform_logo.png)

_**Thinger.io**_ is an Open-source IoT platform created just for simplify and speed-up connected project. This system allows to connect any kind of electronic device to an IoT server, being able to store, show, analyze and share data, but also to control devices and create automatic behaviours with a user-friendly interface. More information click [Thinger.io](https://thinger.io/). 

### **1. What You Need** :gift:

To build this project, you need the following items:
- 1 NodeMCU ESP8266 board
- 1 LED
- 1 Potentiometer
- 1 breadboard
- some jumper wires
- Arduino IDE ([download here](https://www.arduino.cc/en/Main/Software))
- Thinger library ([download here](https://github.com/thinger-io/Arduino-Library))

#

### **2. Setup Virtual Device on Thinger** :iphone:

- First, you have to sign up or login to [Thinger.io](https://thinger.io/). Then create a virtual device: click __Devices__ menu, and click __+Add Device__ button. Fill out the forms: __Device Id, Device description__ & __Device credentials__, then click __Add Device__.
  
  ![Setup_Thinger_Device](https://raw.githubusercontent.com/LintangWisesa/Arduino_MKR1000_Thinger/master/img/1_Setup_Thinger_Device.png)

#

### **3. Schematics** :wrench::hammer:

- Connect your parts as the following picture:

  ![schematics](https://raw.githubusercontent.com/LintangWisesa/LSTP-Workshop-IoT-ESP8266/master/4_Digital_Analog_Input_Output/4_Analog_InOut.png)

#

### **4. Sketch** :clipboard:
 
- Make sure the **Thinger** library are installed. Open Arduino IDE then copy the sketch below. Insert your __Thinger username, Device ID, Device Credentials, WiFi name__ & __WiFi password__. Make sure you have chosen the right option for **_Board_** and **_Port_** under **_Tools_** menu. Upload it!

    ```c++
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
    ```

#

### **5. Setup Dashboard on Thinger** :iphone:

- Go to __Dashboards__ menu & click __+Add Dashboard__ button. Then fill out the forms: __Dashboard Id, Dashboard name__ & __Dashboard description__, then click **Add Dashboard** button.
  
  ![Setup_Thinger_Dashboard](https://raw.githubusercontent.com/LintangWisesa/Arduino_MKR1000_Thinger/master/img/2_Setup_Thinger_Dashboard.png)

- Go to your dashboard, then create widgets to control and/or monitor your device. On your dashboard click __+Add Widget__ & feel free to use any Thinger's widgets. On this project, I use:
  - __On/Off State__ (_to control LED on/off_),
  - __Slider__ (_to control the brightness of LED_),
  - __Donut Chart__ (_display potentiometer value on a gauge_), and
  - __Time Series Chart__ (_display potentiometer value on a bar graph_). 

  ![Setup_Thinger_Dashboard](https://raw.githubusercontent.com/LintangWisesa/Arduino_MKR1000_Thinger/master/img/3_Setup_Thinger_Widget.png)

#

  - __Done!__ :ballot_box_with_check:

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
