#include <stdio.h>

/**
 *
 *
 */
int main(void)
{
  int n, m;

  for (n = 48; n <= 56; n++)
    {
      for (m = 49; m <= 57; m++)
	{
	  if (m > n)
	    {
	      putchar(n);
	      putchar(m);
	      if (n != 56 || m != 57)
		{
		  putchar(44);
		  putchar(32);
		}
	    }
	 }
     }
  putchar('\n');
  return (0);
}

