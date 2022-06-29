#ifndef CONTROL_LEG_H
#define CONTROL_LEG_H

#include <Adafruit_PWMServoDriver.h>
// F(0,1,2,4,5,6), B(8,9,10,12,13,14) 구분 제어 
void setFront(int top, int mid, int bot);
void setBACK(int top, int mid, int bot);
void setALL(int top, int mid, int bot);
// R
#endif
