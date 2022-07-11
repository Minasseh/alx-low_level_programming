#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{

	int len = 0, index, j;


	while (s[index++])
		len++;

	index = len;

	for (j = index - 1; j >= 0; j--)

		_putchar(s[j]);

	_putchar('\n');
}
