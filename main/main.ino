#include <Servo.h>

#define switch 2

Servo servo_1, servo_2;
int pos_1 = 0, pos_2 = 0;

void setup() {
  servo_1.attach(9);
  servo_2.attach(10);

  pinMode(switch, INPUT);
}

void loop() {
//  on
  if (digitalRead(switch) == HIGH) {
  //  Servo
    for (pos_1 = 45; pos_1 <= 135; pos_1 += 1) {
      pos_2 = 180 - pos_1;
      servo_1.write(pos_1);
      servo_2.write(pos_2);
      delay(5);
    }
    for (pos_2 = 45; pos_2 <= 135; pos_2 += 1) {
      pos_1 = 180 - pos_2;
      servo_1.write(pos_1);
      servo_2.write(pos_2);
      delay(5);
    }

  }

// off
  else {
  //  Servo Setup
    servo_1.write(90);
    servo_2.write(90);

  }

}
