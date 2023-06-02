!#/bin/bash
#include<stdio.h>

/**
 *main - Entry point 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  printf ("Sice of a char: %d byte(s)\n", sizeof(char));
  printf ("Sice of an int: %d byte(s)\n", sizeof(int));
  printf ("Sice of a long int: %d byte(s)\n", sizeof(long int));
  printf ("Sice of a long long int: %d byte(s)\n", sizeof(long long int));
  printf ("Sice of a float: %d byte(s)\n", sizeof(float));
  return(0);
}
