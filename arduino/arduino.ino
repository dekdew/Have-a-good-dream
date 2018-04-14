#include <Servo.h>

Servo SERVO_1, SERVO_2;
#define IO_SWITCH 2
#define RX 0 //input
#define TX 1 //output

int pos_1 = 0, pos_2 = 0;
int io_status, firebase_status=1;
