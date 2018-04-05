
# Have a good dream
This is a project for Computer Programming 2017.

## Installation
 - Download the [Arduino IDE](https://www.arduino.cc/en/Main/Software) and install to your computer.
![download Arduino IDE](https://user-images.githubusercontent.com/32861458/38161222-19483d34-34f5-11e8-8b55-f9c01261893e.png)

 - Download  [Firebase Arduino](https://github.com/firebase/firebase-arduino/archive/master.zip), [ESP8266WiFi](http://arduino-esp8266.readthedocs.io/) and add library to Arduino IDE.
![install libreries](https://user-images.githubusercontent.com/32861458/38161239-52b132ba-34f5-11e8-9e4a-11852f7e81d0.png)

 - Download and Install [driver](https://www.silabs.com/products/development-tools/software/usb-%20to-uart-bridge-vcp-drivers).

## Setup
 - WiFi
   - Set your wifi said to file `arduino/arduino.ino` in line `#define WIFI_SSID "<Your WiFi SSID>"`.
   -  Set your wifi password to file `arduino/arduino.ino` in line `#define WIFI_PASSWORD "<Your WiFi password>"`.

 - [Firebase](https://firebase.google.com/)
   -  Login to Google account and create new project.
![firebase01](https://user-images.githubusercontent.com/32861458/38351598-60cf90a6-38da-11e8-826b-6fd611cd2d7b.png)

   - Go to `DEVELOP/Database/DATA` and copy firebase auth to file `arduino/arduino.ino` in line `#define FIREBASE_HOST "<Your firebase auth>"`.
![firebase02](https://user-images.githubusercontent.com/32861458/38351977-fac9407a-38db-11e8-9dc8-c31858bbc0a3.png)

   - Go to `Project settings/SERVICE ACCOUNTS/  
Database Secrets` and copy firebase   
Database Secrets to file `arduino/arduino.ino` in line `#define FIREBASE_KEY "<Your firebase key>"`.
![firebase03](https://user-images.githubusercontent.com/32861458/38352172-7e2b2596-38dc-11e8-963e-97f906156063.png)

   - Go to `DEVELOP/Authentication/  
SIGN-IN METHOD` then choose Facebook and fill in `App ID` and `App secret` from Facebook for Developers. Don't forget to save!
![firebase04](https://user-images.githubusercontent.com/32861458/38352418-52afb35e-38dd-11e8-8b4e-9c6ea800a0ad.png)

   - Go to `Project Overview/Add Firebase to your web app` then copy and paste the snippet at `firebase/public/index.html` in line `<!-- Copy and paste the snippet here. -->`.
![firebase05](https://user-images.githubusercontent.com/32861458/38352953-24bc43f2-38df-11e8-98ca-31484076de35.png)

 - [Facebook for Developers](https://developers.facebook.com)
   - Login to Facebook account and create new app ID.
![facebook01](https://user-images.githubusercontent.com/32861458/38354239-0c5d4398-38e3-11e8-88c7-646ecf5c940e.png)

    - Go to `Settings/Basic` you will get App ID and App Secret to fill in firebase authentication.
![facebook02](https://user-images.githubusercontent.com/32861458/38354316-65854060-38e3-11e8-915c-96f350847a5e.png)
    - Go to `PRODUCTS/Facebook Login/Settings` and fill in your Valid OAuth Redirect URIs from firebase.
![facebook03](https://user-images.githubusercontent.com/32861458/38354444-db339848-38e3-11e8-9af0-8f2b08e0a169.png)

 - [Line Notify](https://notify-bot.line.me/th/)
   - Login to Line account and create new token.
![line01](https://user-images.githubusercontent.com/32861458/38353968-452dfb5a-38e2-11e8-93ec-d9061d69f2f1.png)

    - Copy your token to file `arduino/arduino.ino` in line `define LINE_TOKEN "<Your line token>"`.
![line02](https://user-images.githubusercontent.com/32861458/38354063-770f7f2c-38e2-11e8-82e6-539fbd0f8894.png)

## Author
 - 60070073 : Passawit Riewthong
 - 60070076 : Mareena Nuraman
 - 60070082 : Raksina


---
Faculty of Information Technology

King Mongkut's Institute of Technology Ladkrabang