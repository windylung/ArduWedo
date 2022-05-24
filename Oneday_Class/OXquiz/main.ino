void	setup()
{
	pinMode(7, INPUT);
	pinMode(8, OUTPUT);

	pinMode(11, INPUT);
	pinMode(12, OUTPUT);
}

void 	loop()
{
	int	RedBtn = digitalRead(7);
	int	GreenBtn = digitalRead(11);

	if(RedBtn == HIGH && GreenBtn == LOW) {
		digitalWrite(8, HIGH);
		digitalWrite(12, LOW);
	}
	else if (RedBtn == LOW && GreenBtn == HIGH)
	{
		digitalWrite(8, LOW);
		digitalWrite(12, HIGH);
	}
	else
	{
		digitalWrite(8, LOW);
		digitalWrite(12, LOW);
	}
}