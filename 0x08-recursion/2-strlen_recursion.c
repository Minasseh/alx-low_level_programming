#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string
 *
 * Return: The length
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}

	return (len);
}
