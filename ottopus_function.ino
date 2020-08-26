/*makebot ottopus robotcoding file
 * ------function------
 * forward => forward();
 * backward => backward();
 * usermotion => usermotion(LeftFrontFoot, RightFrontFoot, LeftMiddleFoot, RightMiddleFoot, LeftBackFoot, RightBackFoot);
 */
#include <Servo.h>

Servo LFF;
Servo RFF;
Servo LMF;
Servo RMF;
Servo LBF;
Servo RBF;

void forward() {
  LFF.write(0);
  RFF.write(180);
  LMF.write(180);
  RMF.write(0);
  LBF.write(180);
  RBF.write(0);
  delay(200);
  LFF.write(90);
  RFF.write(90);
  LMF.write(180);
  RMF.write(0);
  LBF.write(180);
  RBF.write(0);
  delay(200);
  LFF.write(90);
  RFF.write(90);
  LMF.write(90);
  RMF.write(90);
  LBF.write(180);
  RBF.write(0);
  delay(200);
  LFF.write(90);
  RFF.write(90);
  LMF.write(90);
  RMF.write(90);
  LBF.write(90);
  RBF.write(90);
  delay(200);
  LFF.write(0);
  RFF.write(180);
  LMF.write(90);
  RMF.write(90);
  LBF.write(90);
  RBF.write(90);
  delay(200);
  LFF.write(0);
  RFF.write(180);
  LMF.write(180);
  RMF.write(0);
  LBF.write(90);
  RBF.write(90);
  delay(200);
}

void backward() {
  LFF.write(0);
  RFF.write(180);
  LMF.write(180);
  RMF.write(0);
  LBF.write(180);
  RBF.write(0);
  delay(200);
  LFF.write(0);
  RFF.write(180);
  LMF.write(180);
  RMF.write(0);
  LBF.write(90);
  RBF.write(90);
  delay(200);
  LFF.write(0);
  RFF.write(180);
  LMF.write(90);
  RMF.write(90);
  LBF.write(90);
  RBF.write(90);
  delay(200);
  LFF.write(90);
  RFF.write(90);
  LMF.write(90);
  RMF.write(90);
  LBF.write(90);
  RBF.write(90);
  delay(200);
  LFF.write(90);
  RFF.write(90);
  LMF.write(90);
  RMF.write(90);
  LBF.write(180);
  RBF.write(0);
  delay(200);
  LFF.write(90);
  RFF.write(90);
  LMF.write(180);
  RMF.write(0);
  LBF.write(180);
  RBF.write(0);
  delay(200);
}

void usermotion(int LeftFrontFoot, int RightFrontFoot, int LeftMiddleFoot, int RightMiddleFoot, int LeftBackFoot, int RightBackFoot) {
  LFF.write(LeftFrontFoot);
  RFF.write(RightFrontFoot);
  LMF.write(LeftMiddleFoot);
  RMF.write(RightMiddleFoot);
  LBF.write(LeftBackFoot);
  RBF.write(RightBackFoot);
}

void setup() {
  LFF.attach(2);
  RFF.attach(3);
  LMF.attach(4);
  RMF.attach(5);
  LBF.attach(6);
  RBF.attach(7);
  //input code under this line
  
}

void loop() {
  //input code under this line
  
}
