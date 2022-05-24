#define piezo 3
#define C 261.6
#define D 293.7
#define E 329.6
#define F 349.2
#define G 392.0
#define A 440.0
#define B 493.9
//지속 시간에 있어서도 따로 배열 만들어서 셈여림 나타내기

// int Hz[7] = {C, D, E, F, G, A, B}

void setup()
{
  // 피에조 부저
  pinMode(piezo, OUTPUT);

  for (int pin = 6; pin <= 12; pin++)
  {
    pinMode(pin, INPUT);
  }
}

void loop()
{
  // int high_pin;
  // if (digitalRead(high_pin) == HIGH)
  // {
  //   return high_pin
  // }
  if (digitalRead(6) == HIGH)
  {
    tone(3, C); // 3번핀에 주파수 신호를 출력
  }

  else if (digitalRead(7) == HIGH)
  {
    tone(3, D);
  }

  else if (digitalRead(8) == HIGH)
  {
    tone(3, E);
  }

  else if (digitalRead(9) == HIGH)
  {
    tone(3, F);
  }

  else if (digitalRead(10) == HIGH)
  {
    tone(3, G);
  }

  else if (digitalRead(11)) == HIGH)
  {
    tone(3, A);
  }

  else (digitalRead(7) == HIGH)
  {
    tone(3, B);
  }
}