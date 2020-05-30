#include <Servo.h>

Servo a1;
Servo a2;
Servo a3;
Servo a4;
Servo a5;
Servo a6;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
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
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  delayMicroseconds(2);
  digitalWrite(8, HIGH);
  delayMicroseconds(10);
  digitalWrite(8, LOW);
 
  unsigned long duration = pulseIn(9, HIGH);
 
  float distance = duration / 29.0 / 2.0;
  if(distance < 10) {
  a1.write(0);
  a2.write(180);
  a3.write(180);
  a4.write(0);
  a5.write(180);
  a6.write(0);
  delay(200);
  a1.write(0);
  a2.write(180);
  a3.write(180);
  a4.write(0);
  a5.write(90);
  a6.write(90);
  delay(200);
  a1.write(0);
  a2.write(180);
  a3.write(90);
  a4.write(90);
  a5.write(90);
  a6.write(90);
  delay(200);
  a1.write(90);
  a2.write(90);
  a3.write(90);
  a4.write(90);
  a5.write(90);
  a6.write(90);
  delay(200);
  a1.write(90);
  a2.write(90);
  a3.write(90);
  a4.write(90);
  a5.write(180);
  a6.write(0);
  delay(200);
  a1.write(90);
  a2.write(90);
  a3.write(180);
  a4.write(0);
  a5.write(180);
  a6.write(0);
  delay(200);
  }else {
  a1.write(0);
  a2.write(180);
  a3.write(180);
  a4.write(0);
  a5.write(180);
  a6.write(0);
  delay(200);
  a1.write(90);
  a2.write(90);
  a3.write(180);
  a4.write(0);
  a5.write(180);
  a6.write(0);
  delay(200);
  a1.write(90);
  a2.write(90);
  a3.write(90);
  a4.write(90);
  a5.write(180);
  a6.write(0);
  delay(200);
  a1.write(90);
  a2.write(90);
  a3.write(90);
  a4.write(90);
  a5.write(90);
  a6.write(90);
  delay(200);
  a1.write(0);
  a2.write(180);
  a3.write(90);
  a4.write(90);
  a5.write(90);
  a6.write(90);
  delay(200);
  a1.write(0);
  a2.write(180);
  a3.write(180);
  a4.write(0);
  a5.write(90);
  a6.write(90);
  delay(200);
  }
}
