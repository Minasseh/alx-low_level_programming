#include "main.h"

/**
 * factorial - re factorial of a number
 * @
 * Return: factorial of n
 */

int factorial(int n)
{
  int fact;
  fact = n * factorial(n - 1);
  return (fact);
  if (n == 0)
    {
      return (1);
    }
  if (n < 0)
    {
      return (-1);
    }
}
