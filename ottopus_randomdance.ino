#include <Servo.h>

Servo a1;
Servo a2;
Servo a3;
Servo a4;
Servo a5;
Servo a6;

void setup() {
  a1.attach(2);
  a2.attach(3);
  a3.attach(4);
  a4.attach(5);
  a5.attach(6);
  a6.attach(7);
  a1.write(0);
  a2.write(180);
  a3.write(180);
  a4.write(0);
  a5.write(180);
  a6.write(0);
}
void loop() {
  a1.write(random(0, 181));
  a2.write(random(0, 181));
  a3.write(random(0, 181));
  a4.write(random(0, 181));
  a5.write(random(0, 181));
  a6.write(random(0, 181));
  delay(200);
}
