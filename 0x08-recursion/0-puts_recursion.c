#include "main.h"
/**
 * _puts_recursion - A function that prints a string
 * @s: The character to be printed
 *
 */
void _puts_recursion(char *s)
{
  if (*s == '\0')
    return;
  _putchar(*s);
    _puts_recursion(++s);
}