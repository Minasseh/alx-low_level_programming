#include <stdio.h>
/**
 * main - prints alphabet
 *
 * Return: returns zero
 */
int main(void)
{
char alph;
for(alph = 'a'; alph <= 'z'; alph++)
putchar(alph);
for(alph = 'A'; alph <= 'Z'; alph++)
putchar(alph);
putchar('\n');
return (0);
}
     
