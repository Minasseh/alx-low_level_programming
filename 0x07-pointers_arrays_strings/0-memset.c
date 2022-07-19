#include "main.h"

/**
 * _memset - sets constant byte b in memory
 * @s: - pointes s
 * @b: - constant b
 * @n: - number
 * Return: returns the value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
