#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */

void puts2(char *str)
{

	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);

		i = i + 2;
	}

	_putchar('\n');
}
