#include <stdio.h>

int main()
{
  int c, n;

  for (c = 48; c <= 56; c++)
    for (n = c + 1; n <= 57; n++)
      {
	if (c != n)
	  {
	    putchar(c);
	    putchar(n);
	    if (c != 48 || n != 57)
	      {
		putchar(44);
		putchar(32);
	      }
	  }
      }
  putchar('\n');
  return (0);
}
