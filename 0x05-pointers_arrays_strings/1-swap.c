#include "main.h"
/**
 * swap_int - swaps integers a and b
 * @a: pointer a
 * @b: pointer b
 * Return: void
 */

void swap_int(int *a, int *b)
{
int sw = *a;
*a = *b;
*b = sw;
}
