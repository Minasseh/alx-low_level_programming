#include "main.h"
/**
 * _strlen - length of a string
 * @s: the string
 * Returns: the length value
 */

int _strlen(char *s)
{
int len = 0;

while(*s++)
len++;

return (len);
}
