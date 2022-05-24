#include <LedControl.h>

void get_mode(int mode);
void  glitch(void);

//모드 감소(-)
const int dBTN = 3;
//모드 증가(+)
const int iBTN = 4;
int cnt = 0;

//모드 개수
int mode_num = 5;

LedControl dot = LedControl(12, 10, 11, 1);

void setup() {
  pinMode(BTN, INPUT_PULLUP);
  dot.shutdown(0, false);
  dot.setIntensity(0, 15);
  dot.clearDisplay(0);
}

void loop() {

  if (digitalRead(dBTN) == LOW) {
    cnt--;
    delay(500);
  }
  if (digitalRead(iBTN) == LOW) {
    cnt ++;
    delay(500);
  }
  get_mode(cnt % mode_num);
}


void get_mode(int mode)
{
  if (mode == 0)
    dot.setIntensity(0, 1);
    for (int i = 0; i < 9; i++)
      dot.setRow(0, i, B11111111);

  else if (mode == 1)
    dot.setIntensity(0, 7);
    for (int i = 0; i < 9; i++)
      dot.setRow(0, i, B11111111);

  else if (mode == 2)
    dot.setIntensity(0, 15);
    for (int i = 0; i < 9; i++)
      dot.setRow(0, i, B11111111);
      
  else if (mode == 3)
    glitch();
  
  else
  //모드 추가 할 부분
}

// 깜빡이는 모드
void  glitch(void)
{
  for (int i = 0; i < 9; i++)
    dot.setRow(0, i, B11111111);
  delay(800)
  for (int i = 0; i < 9; i++)
    dot.setRow(0, i, B00000000);
  delay(800);
}
