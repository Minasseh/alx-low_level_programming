#include "main.h"

/**
 * factorial - re factorial of a number
 * @
 * Return: factorial of n
 */

int factorial(int n)
{
  int fact;
  int i;
  i = 1;
  fact = 1;
  while(i <= n)
    {
      fact = (n * i);
    i++;
    }
  if (n == 0)
    {
      return (1);
    }
  if (n < 0)
    {
      return (-1);
    }
  return (fact);
