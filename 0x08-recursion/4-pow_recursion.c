#include "main.h"
/**
 * _pow_recursion - Returns x raised to y
 * @x: The number to be raised
 * @y: The power
 *
 * Return: Returns the value
 */

int _pow_recursion(int x, int y)
{
	int pow = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	pow = pow * _pow_recursion(x, y - 1);

	return (pow);
}
