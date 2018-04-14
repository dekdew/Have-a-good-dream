void setup() {
  Serial.begin(115200);

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

  pinMode(MIC, INPUT);
  pinMode(RX, INPUT);
  pinMode(TX, OUTPUT);
}
