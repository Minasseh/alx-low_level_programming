#include "main.h"

/**
 * print_numbers - Prints numbers from 0-9.
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		_ptchar(n);
	_putchar('\n');
}
