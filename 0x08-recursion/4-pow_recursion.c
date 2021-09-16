#include "main.h"
/**
 * _power_recursion - returns @x power to @y
 * @x: integer x
 * @y: integer y
 * Return: The result returned
 */

int _pow_recursion(int x, int y)
{
  int result = x;
  if (y < 0)
    {
      return (-1);
    }
  else if (y == 0)
    {
      return (1);
    }
  result *= _pow_recursion(x, y-1);
  return (result);
}
