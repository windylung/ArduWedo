#include "control_leg.h"
void setFront(int top, int mid, int bot)
{
  Adafruit_PWMServoDriver pwm=Adafruit_PWMServoDriver();
  //매핑
  top = constrain(map(top, 0, 180, 150, 600), 150, 600); 
  mid = constrain(map(mid, 0, 180, 150, 600), 150, 600); 
  bot = constrain(map(bot, 0, 180, 150, 600), 150, 600); 

  //setPWM 
  pwm.setPWM(0,0,top);
  pwm.setPWM(4,0,top);
  delay(10);
  
  pwm.setPWM(1,0,mid);
  pwm.setPWM(5,0,mid);
  delay(10);

  pwm.setPWM(2,0,bot);
  pwm.setPWM(6,0,bot);
  delay(10);
}

void setBack(int top, int mid, int bot)
{
  Adafruit_PWMServoDriver pwm=Adafruit_PWMServoDriver();
  //매핑
  top = constrain(map(top, 0, 180, 150, 600), 150, 600); 
  mid = constrain(map(mid, 0, 180, 150, 600), 150, 600); 
  bot = constrain(map(bot, 0, 180, 150, 600), 150, 600); 

  //sp : PWM 시작하는 핀 (L_BACK_TOP)
  // int sp = 8;

  //setPWM 
  pwm.setPWM(8,0,top);
  pwm.setPWM(12,0,top);
  delay(10);

  pwm.setPWM(9,0,mid);
  pwm.setPWM(13,0,mid);
  delay(10);

  pwm.setPWM(10,0,bot);
  pwm.setPWM(14,0,bot);
  delay(10);
}

void setALL(int top, int mid, int bot)
{
  setFront(top, mid, bot);
  setBack(top, mid, bot);
}

