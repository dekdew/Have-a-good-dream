#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

void Line_Notify(String message) ;

#define RX D1
#define TX D0
#define MIC A0
#define WIFI_SSID "Passawit"
#define WIFI_PASSWORD "0914501330"
#define FIREBASE_HOST "have-a-sweet-dream.firebaseio.com"
#define FIREBASE_KEY "h4W53Y9c5GEOxeZ933hf9urhfRenw6t0EfpS1enf"
#define LINE_TOKEN "HZ1dyJtIyzvfNWDkxULhknx8BbwVz9SrQIJKFl6UbW4"

String message = "The baby needs you";
int count_voice=0;

SoftwareSerial NodeSerial(RX, TX); // RX | TX

void setup() {
  pinMode(RX, INPUT);
  pinMode(TX, OUTPUT);
  pinMode(MIC, INPUT);

  Serial.begin(115200);

  NodeSerial.begin(4800);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.println("connecting...");
  while (WiFi.status() != WL_CONNECTED) 
  {
     delay(250);
     Serial.print(".");
  }
  Serial.println("WiFi connected");  
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  Firebase.begin (FIREBASE_HOST, FIREBASE_KEY);

}

void loop() {

  Serial.println(analogRead(MIC));
  
//  if (digitalRead(SW) == HIGH) {
//    while(digitalRead(SW) == HIGH) delay(10);
//
//    Serial.println("Enter !");
//    Line_Notify(message);
//  }
  delay(1000);

}

void Line_Notify(String message) {
  WiFiClientSecure client;

  if (!client.connect("notify-api.line.me", 443)) {
    Serial.println("connection failed");
    return;
  }

  String req = "";
  req += "POST /api/notify HTTP/1.1\r\n";
  req += "Host: notify-api.line.me\r\n";
  req += "Authorization: Bearer " + String(LINE_TOKEN) + "\r\n";
  req += "Cache-Control: no-cache\r\n";
  req += "User-Agent: ESP8266\r\n";
  req += "Connection: close\r\n";
  req += "Content-Type: application/x-www-form-urlencoded\r\n";
  req += "Content-Length: " + String(String("message=" + message).length()) + "\r\n";
  req += "\r\n";
  req += "message=" + message;
  Serial.println(req);
  client.print(req);

  delay(20);

  // Serial.println("-------------");
  while(client.connected()) {
    String line = client.readStringUntil('\n');
    if (line == "\r") {
      break;
    }
    //Serial.println(line);
  }
  // Serial.println("-------------");
}
