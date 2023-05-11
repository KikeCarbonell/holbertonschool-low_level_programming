#include <stdio.h>

/**
 *main - prints the alphabet.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
  int i;

  for (i = 97; i <= 122; i++)
  {   
    putchar(i);
    /*if (i == 122)
    i = 64;
    if (i == 90)
    break;*/
  }
  for (i = 65; i <= 90; i++)
    putchar(i);

  putchar('\n');
  return (0);
}
