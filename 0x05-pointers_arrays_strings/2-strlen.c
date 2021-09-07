#include <stddef.h>
#include "main.h"
/**
 * _strlen - length of a string
 * @str: the string
 * Returns: the length value
 */

size_t _strlen(char *str)
{
size_t len = 0;

while(*str++)
len++;

return (len);
}
