#include <stdio.h>
#include <time.h>
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
  printf("%2d is positive\n",n>0);
  printf("%2d is zero\n",n==0);
  printf("%2d is negative\n",n<0);
  return (0);
}
