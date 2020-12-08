/* makebot ottopus library
 * makebot homepage(English) : http://makebot.mystrikingly.com/
 * makebot homepage(Korean) : https://makebot.modoo.at
 * files : https://github.com/makebot-lab/ottopus
 * made by WONDAEHAN.
 */
#ifndef Ottopus_h
#define Ottopus_h

#include <Servo.h>
#include <Oscillator.h>
#include <US.h>
#include "Arduino.h"

class Ottopus {
  public:
    void ready();
    void attachservo(int x);
    void detachservo(int x);
    void setangles(int a, int b, int c, int d, int e, int f);
    float distance();
    void home();
    void move(int movenum);
    void motion(int motionnum);
    void sound(int soundnum);
  private:
    Oscillator servo[6];
    US us;
};

#endif
