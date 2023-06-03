#include <stdio.h>

/**
 *main - prints the lowercase alphabet in reverse.
 *
 *Return: Always 0 (Succes)
 */
int main(void)
{
  char c;

  for(c = 122; c >= 97; c--)
    {
      putchar(c);
    }
  putchar('\n');
  return (0);
}
