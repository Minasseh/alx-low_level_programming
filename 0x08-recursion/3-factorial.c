#include "main.h"
/**
 * factorial - a function that calculates the factorial of a given number
 * @n: The number
 *
 * Return: Returns the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
