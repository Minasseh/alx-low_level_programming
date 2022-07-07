#include <stdio.h>

/**
 * main - Prints numbers 1-100
 *
 * Return: always 0.
 */

int main(void)
{
	int i = 1;

	while (i < 101)
	{

		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");

		else
			printf("%d ", i);
		i++;
	}
	printf("\n");

	return (0);
}
