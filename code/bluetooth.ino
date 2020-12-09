/* makebot ottopus bluetooth code
 * makebot homepage(English) : http://makebot.mystrikingly.com/
 * makebot homepage(Korean) : https://makebot.modoo.at
 * files : https://github.com/makebot-lab/ottopus
 * made by WONDAEHAN.
 */
#include <SoftwareSerial.h>
 
#include <Ottopus.h>

Ottopus Ottopus;

SoftwareSerial bluetooth(0, 1);

void setup() {
  Ottopus.ready();
  bluetooth.begin(9600);
}

void loop() {
  if(bluetooth.available()) {
    char bluetooth_read = bluetooth.read();
    switch(bluetooth_read) {
      case 'a': //home
        Ottopus.home();
        break;
      case 'b': //move
        Ottopus.move(bluetooth.parseInt());
        break;
      case 'c': //motion
        Ottopus.motion(bluetooth.parseInt());
        break;
      case 'd': //sound
        Ottopus.sound(bluetooth.parseInt());
        break;
    }
  }
}
