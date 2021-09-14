#include "main.h"
/**
 * _memset - sets constant byte b in memory
 * @memory - pointes s
 *
 * Return: returns the value
 */

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
  unsigned char *memory = s, value = b;
  for(i = 0; i < n; i++)
  memory[i] = value;
  return (memory);
}
