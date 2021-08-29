#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*more headers goes there */

/**
 * main - prints the n value
 *
 * Return: returns the value
 */
int main(void)
{
int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

if(n > 0);
{
  printf("%d is positive\n", n);
}
else if(n == 0);
{
  printf("%d is zero\n", n);
}
else
{
  printf("%d is negative\n", n);
}
}
