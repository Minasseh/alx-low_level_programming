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
  fact = n * (n - 1);
  while(i <= n)
    i++;
  if (n == 0)
    {
      return (1);
    }
  if (n < 0)
    {
      return (-1);
    }
  return (n * factorial(n - 1));
