#include <stdio.h>
/**
 * main - prints alphabets without e&q
 *
 * Return: returns zero value
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{

		if (alph != 'e' && alph != 'q')

			putchar(alph);
	}

	putchar('\n');

	return (0);
}
