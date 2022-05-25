#include <LedControl.h>

//모드 감소(-)
const int dBTN = 3;
//모드 증가(+)
const int iBTN = 4;
int cnt = 0;

int DIN = 10;
int CLK = 12;
int CS = 11;

LedControl dot = LedControl(DIN, CLK, CS, 1);

void setup() {
  Serial.begin(9600);
  pinMode(dBTN, INPUT_PULLUP);
  pinMode(iBTN, INPUT_PULLUP);
  
  dot.shutdown(0, false);
  dot.setIntensity(0, 15);
  dot.clearDisplay(0);
}

void loop() {

  Serial.print(cnt);

  if (digitalRead(dBTN) == LOW) {
    cnt--;
    delay(500);
  }
  if (digitalRead(iBTN) == LOW) {
    cnt ++;
    delay(500);
  }
  get_mode(cnt);
  for (int i = 0; i < 9; i++)
      dot.setRow(0, i, B11111111);
}


void get_mode(int mode)
{
  if (mode <= 0)
    dot.setIntensity(0, 1);
    
  else if (mode == 1)
    dot.setIntensity(0, 6);
 
  else if (mode == 2)
    dot.setIntensity(0, 11);
    
  else
    dot.setIntensity(0, 15);
}
