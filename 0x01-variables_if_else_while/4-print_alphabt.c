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
putchar(alph);
putchar('\n');
return (0);
} | grep -i eq
