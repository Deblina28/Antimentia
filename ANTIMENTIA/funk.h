void showSequence(byte *seq, int n)
{
  for (int i = 0; i < n; i++)
  {

    digitalWrite(seq[i], HIGH);
    delay(500);
    digitalWrite(seq[i], LOW);

    if (i == (n - 1))
      return;

    delay(500);
  }
}

void midSeq(int led)
{

  for (int i = 0; i < 5; i++)
  {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
  }

  digitalWrite(led, HIGH);
}

byte map(byte in)
{
  switch (in)
  {
    case 0x1e:  delay(20);
      return 2;

    case 0x2e:  delay(20);
      return 3;

    case 0x36:  delay(20);
      return 4;

    case 0x3a:  delay(20);
      return 5;

    case 0x3c:  delay(20);
      return 6;

    default: return 0;

  }
}
