#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{

	int len = 0, index = 0, j;


	while (s[index] != '\0')
		len++;

	len = index;

	for (j = len - 1; j >= 0; j--)

		_putchar(s[j]);

	_putchar('\n');
}
