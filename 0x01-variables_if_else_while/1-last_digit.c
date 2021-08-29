#include <stdlib.h>
#include <time.h>
#include <math.h>
/* more headers goes there */

/**
 * main - finds the last digits of anumber
 *
 * Return: returns zero value
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  int last;
  last = n % 10;
    if (last > 5)
      {
       printf("Last digit of %d is %d and is greater than 5\n", n, last);
      }
    else if (last == 0)
      {
       printf("Last digit of %d is %d and is 0\n", n, last);
      }
    else if (0 < last < 6)
      {
       printf("Last digit of %d is %d and is less than 6 and not not 0\n", n, last);
       else { printf(error) }
  return (0);
}
