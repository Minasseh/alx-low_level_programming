#include "main.h"
/**
 * _memset - sets constant byte b in memory
 * @memory - pointes s
 *
 * Return: returns the value
 */

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i = 0;
  unsigned char *memory = s;
  for(i < n, i++)
  memory[i] = b;
  return (memory);
}
