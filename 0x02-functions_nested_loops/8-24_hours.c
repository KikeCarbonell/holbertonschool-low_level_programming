#include "main.h"

/**
 *
 *
 */
void jack_bauer(void)
{
  int i, j;

  for(i = 0; i < 24; i++)
    {
      for(j = 0; j < 60; j++)
	{
	  printf("%02d:%02d\n", i, j);
	}
    }
}
