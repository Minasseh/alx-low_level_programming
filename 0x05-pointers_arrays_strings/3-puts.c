#include "main.h"
/**
 * _puts - displays the string into stdout
 * @str: the given string
 * Return: void
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);
_puts('\n');
}
