#include <stdio.h>

int main()
{
  int a, b, c, d;
  int num1, num2;

  for (num1 = 0; num1 < 99; num1++)
    for (num2 = num1 + 1; num2 < 100; num2++)
      {
	a = num1 / 10;
	b = num1 % 10;
	c = num2 / 10;
	d = num2 % 10;

	putchar(a + 48);
	putchar(b + 48);
	putchar(32);
	putchar(c + 48);
	putchar(d + 48);

	if (num1 == 98 && num2 == 99)
	  break;

	putchar(44);
	putchar(32);
      }
  putchar('\n');
  return (0);
}
