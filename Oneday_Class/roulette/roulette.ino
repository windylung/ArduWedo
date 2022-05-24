#include <Ledcontrol.h>

LedControl lc = LedControl(12, 11, 10, 1);

// 한 턴에서 증가 할 수 있는 최대 값
int max_val = 3;
// 해적이 폭발하는 한계치
int limit_val = 40;

//얼굴모양으로 수정 필요
byte face1[8] = { B10000001, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B10000001};
byte face2[8] = { B10000001, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B10000001};
byte face3[8] = { B10000001, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B10000001};
byte face4[8] = { B10000001, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B10000001};

void  setup()
{
  int score = 0;

  //절전모드 끄기
  lc.shutdown(0, false);
  //밝기 8로 지정 (0 ~ 15)
  lc.setIntensity(0, 8);
  //도트 매트리스 LED 초기화
  lc.clearDisplay(0);
}

byte  *get_face(int score)
{
  int face_nb = score % (limit_val / 4);
  if (face_nb == 0)
    return (face1);
  else if (face == 1)
    return (face2);
  else if (face == 2)
    return (face3);
  else
    return(face4);
} 

void  loop()
{
  int val = analogRead(A0);
  val = map(val, 0, 1023, 0, max_val);

  if (val > 0)
    score += val;

  //해적 얼굴 출력 함수
  byte *face = get_face(score);
  for (int row = 0; row < 8; row++)
  {
    lc.setRow(0, row, face[row]);  // 도트매트릭스의 LED를 행단위로 위부터 켭니다.
    delay(25);
  }
}