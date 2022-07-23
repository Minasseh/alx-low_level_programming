#include "main.h"

/**
 * _isupper - a function that tests if c is upper case letter
 * @c: The character to be entered
 *
 * Return: 1 if c is upper case
 *         0 if not.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
