/* makebot ottopus library
 * makebot homepage(English) : http://makebot.mystrikingly.com/
 * makebot homepage(Korean) : https://makebot.modoo.at
 * files : https://github.com/makebot-lab/ottopus
 * made by WONDAEHAN.
 */
#include "Arduino.h"
#include "Ottopus.h"
#include <Servo.h>

//servos
void Ottopus::attachservo(int x) {
  servo[x].attach(x + 2);
}

void Ottopus::detachservo(int x) {
  servo[x].attach(x + 2);
  servo[x].detach();
}

void Ottopus::setangles(int a, int b, int c, int d, int e, int f) {
  for(int x = 0; x < 6; x++) {
    if(x == 0) {
      if(a <= 180) {
        servo[x].SetPosition(a);
      }
    }else if(x == 1) {
      if(b <= 180) {
        servo[x].SetPosition(b);
      }
    }else if(x == 2) {
      if(c <= 180) {
        servo[x].SetPosition(c);
      }
    }else if(x == 3) {
      if(d <= 180) {
        servo[x].SetPosition(d);
      }
    }else if(x == 4) {
      if(e <= 180) {
        servo[x].SetPosition(e);
      }
    }else if(x == 5) {
      if(f <= 180) {
        servo[x].SetPosition(f);
      }
    }
  }
}

//sensor
float Ottopus::distance(){

  return us.read();
}

//ottopus
void Ottopus::ready() {  //ready
  for(int x = 0; x < 6; x++) {
    attachservo(x);
    delay(30);
  }
  noTone(13);
  us.init(8, 9);
  home();
}

void Ottopus::home() {  //home
  setangles(0, 180, 180, 0, 180, 0);
}

void Ottopus::move(int movenum) {  //move
  home();
  if(movenum == 1) {  //forward
    for(int x = 0; x < 3; x++) {
      setangles(181, 181, 181, 181, 180, 0);
      delay(200);
      setangles(90, 90, 181, 181, 181, 181);
      delay(200);
      setangles(181, 181, 90, 90, 181, 181);
      delay(200);
      setangles(181, 181, 181, 181, 90, 90);
      delay(200);
      setangles(0, 180, 181, 181, 181, 181);
      delay(200);
      setangles(181, 181, 180, 0, 181, 181);
      delay(200);
    }
  }else if(movenum == 2) {  //backward
    for(int x = 0; x < 3; x++) {
      setangles(0, 180, 181, 181, 181, 181);
      delay(200);
      setangles(181, 181, 181, 181, 90, 90);
      delay(200);
      setangles(181, 181, 90, 90, 181, 181);
      delay(200);
      setangles(90, 90, 181, 181, 181, 181);
      delay(200);
      setangles(181, 181, 181, 181, 180, 0);
      delay(200);
      setangles(181, 181, 180, 0, 181, 181);
      delay(200);
    }
  }else if(movenum == 3) {  //turn left
    setangles(90, 181, 90, 181, 90, 181);
    delay(200);
    setangles(0, 181, 181, 181, 181, 181);
    delay(200);
    setangles(181, 181, 181, 181, 181, 90);
    delay(200);
    setangles(181, 181, 180, 181, 181, 181);
    delay(200);
    setangles(181, 181, 181, 90, 181, 181);
    delay(200);
    setangles(181, 181, 181, 181, 180, 181);
    delay(200);
    setangles(181, 90, 181, 181, 181, 181);
    delay(200);
    setangles(181, 181, 181, 181, 181, 0);
    delay(200);
    setangles(90, 181, 181, 181, 181, 181);
    delay(200);
    setangles(181, 181, 181, 0, 181, 181);
    delay(200);
    setangles(181, 181, 90, 181, 181, 181);
    delay(200);
    setangles(181, 180, 181, 181, 181, 181);
    delay(200);
    setangles(181, 181, 181, 181, 90, 181);
    delay(200);
  }else if(movenum == 4) {  //turn right
    setangles(181, 90, 181, 90, 181, 90);
    delay(200);
    setangles(181, 180, 181, 181, 181, 181);
    delay(200);
    setangles(181, 181, 181, 181, 90, 181);
    delay(200);
    setangles(181, 181, 181, 0, 181, 181);
    delay(200);
    setangles(181, 181, 90, 181, 181, 181);
    delay(200);
    setangles(181, 181, 181, 181, 181, 0);
    delay(200);
    setangles(90, 181, 181, 181, 181, 181);
    delay(200);
    setangles(181, 181, 181, 181, 180, 181);
    delay(200);
    setangles(181, 90, 181, 181, 181, 181);
    delay(200);
    setangles(181, 181, 180, 181, 181, 181);
    delay(200);
    setangles(181, 181, 181, 90, 181, 181);
    delay(200);
    setangles(0, 181, 181, 181, 181, 181);
    delay(200);
    setangles(181, 181, 181, 181, 181, 90);
    delay(200);
  }
  home();
}

void Ottopus::motion(int motionnum) {  //motion
  if(motionnum == 1) { //hello
    for(int x = 0; x < 3; x++) {
      setangles(181, 181, 0, 181, 181, 181);
      delay(500);
      setangles(181, 181, 90, 181, 181, 181);
      delay(500);
    }
  }else if(motionnum == 2) { //yes
    setangles(181, 181, 181, 180, 181, 181);
    delay(2000);
  }else if(motionnum == 3) { //no
    for(int x = 0; x < 3; x++) {
      setangles(181, 181, 0, 90, 181, 181);
      delay(200);
      setangles(181, 181, 90, 180, 181, 181);
      delay(200);
    }
  }else if(motionnum == 4) { //jump
    for(int x = 0; x < 3; x++) {
      home();
      delay(200);
      setangles(45, 135, 135, 45, 135, 45);
      delay(200);
    }
  }else if(motionnum == 5) { //icanfly
    for(int x = 0; x < 3; x++) {
      setangles(181, 181, 0, 180, 181, 181);
      delay(500);
      setangles(181, 181, 135, 45, 181, 181);
      delay(500);
    }
  }else if(motionnum == 6) { //sleeping
    setangles(90, 90, 90, 90, 90, 90);
    delay(2000);
  }else if(motionnum == 7) { //yay
    for(int x = 0; x < 3; x++) {
      setangles(181, 181, 0, 180, 181, 181);
      delay(300);
      setangles(181, 181, 45, 135, 181, 181);
      delay(300);
    }
  }else if(motionnum == 8) { //dance1
    for(int x = 0; x < 3; x++) {
      setangles(90, 181, 180, 181, 181, 181);
      delay(200);
      setangles(0, 90, 181, 181, 181, 181);
      delay(200);
      setangles(181, 180, 181, 90, 181, 181);
      delay(200);
      setangles(181, 181, 181, 0, 181, 90);
      delay(200);
      setangles(181, 181, 181, 181, 90, 0);
      delay(200);
      setangles(181, 181, 90, 181, 180, 181);
      delay(200);
    }
  }else if(motionnum == 9) { //dance2
    for(int x = 0; x < 3; x++) {
      setangles(181, 90, 181, 0, 181, 181);
      delay(200);
      setangles(90, 180, 181, 181, 181, 181);
      delay(200);
      setangles(0, 181, 90, 181, 181, 181);
      delay(200);
      setangles(181, 181, 180, 181, 90, 181);
      delay(200);
      setangles(181, 181, 181, 181, 180, 90);
      delay(200);
      setangles(181, 181, 181, 90, 181, 0);
      delay(200);
    }
  }else if(motionnum == 10) { //crazydance
    for(int x = 0; x < 6; x++) {
      setangles(random(0, 180), random(0, 180), random(0, 180), random(0, 180), random(0, 180), random(0, 180));
      delay(200);
      setangles(random(0, 180), random(0, 180), random(0, 180), random(0, 180), random(0, 180), random(0, 180));
      delay(200);
    }
  }else if(motionnum == 11) { //eating
    setangles(90, 90, 90, 90, 90, 90);
    for(int x = 0; x < 3; x++) {
      setangles(180, 45, 181, 181, 181, 181);
      delay(300);
      setangles(135, 0, 181, 181, 181, 181);
      delay(300);
    }
  }else if(motionnum == 12) { //UFO
    for(int x = 0; x < 3; x++) {
      setangles(180, 0, 0, 180, 0, 180);
      delay(500);
      setangles(135, 45, 45, 135, 45, 135);
      delay(500);
    }
  }
  home();
}

void Ottopus::sound(int soundnum) {  //sound
  if(soundnum == 1) { //happy
    tone(13, 1300);
    delay(50);
    tone(13, 1125);
    delay(100);
    tone(13, 1500);
    delay(100);
    tone(13, 1700);
    delay(100);
  }else if(soundnum == 2) { //sad
    tone(13, 240);
    delay(100);
    noTone(13);
    delay(500);
    tone(13, 240);
    delay(200);
    noTone(13);
    delay(350);
    tone(13, 220);
    delay(400);
    noTone(13);
    delay(350);
    tone(13, 200);
    delay(400);
  }else if(soundnum == 3) { //surprised
    tone(13, 5000);
    delay(850);
  }else if(soundnum == 4) { //angry
    tone(13, 300);
    delay(200);
    tone(13, 100);
    delay(400);
  }else if(soundnum == 5) { //sleepy
    tone(13, 100);
    delay(800);
    noTone(13);
    delay(800);
    tone(13, 100);
    delay(800);
    noTone(13);
    delay(800);
    tone(13, 100);
    delay(800);
    noTone(13);
    delay(800);
    tone(13, 100);
    delay(800);
  }else if(soundnum == 6) { //joy
    tone(13, 1200);
    delay(100);
    tone(13, 1500);
    delay(100);
    tone(13, 1800);
    delay(300);
  }
  noTone(13);
}
