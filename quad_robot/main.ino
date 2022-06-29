#include "control_leg.h"

Adafruit_PWMServoDriver pwm=Adafruit_PWMServoDriver();

void setup() {
  pwm.begin();
  pwm.setPWMFreq(51); //오작동 한다면 50Hz에서 조금씩 바꿔보기 
}

void loop() {
  setALL(100, 0, 0);
}


