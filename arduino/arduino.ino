#include <Servo.h>
#include <SoftwareSerial.h>

#define IOswitch 2
#define RX 0
#define TX 1

Servo SERVO_1, SERVO_2;

SoftwareSerial ArduinoSerial(RX, TX); // RX, TX

int pos_1 = 0, pos_2 = 0; 

void setup() {
  SERVO_1.attach(9);
  SERVO_2.attach(10);

  pinMode(IOswitch, INPUT);

  Serial.begin (115200);

  ArduinoSerial.begin(4800);
}

void loop() {

  //  on
  if (digitalRead(IOswitch) == HIGH) {
    //  Servo
    for (pos_1 = 45; pos_1 <= 135; pos_1 += 1) {
      pos_2 = 180 - pos_1;
      SERVO_1.write(pos_1);
      SERVO_2.write(pos_2);
      delay(5);
    }
    for (pos_2 = 45; pos_2 <= 135; pos_2 += 1) {
      pos_1 = 180 - pos_2;
      SERVO_1.write(pos_1);
      SERVO_2.write(pos_2);
      delay(5);
    }
  }

  // off
  else {
    //  Servo Setup
    SERVO_1.write(90);
    SERVO_2.write(90);

  }

}
