#include <stdio.h>
/**
 * main - prints reverse alphabets
 *
 * Return: returns zero
 */
int main(void)
{
int alph;
for (alph = 'z'; alph <= 'a'; --alph)
putchar(alph);
putchar('\n');
return (0);
}
