#include "main.h"
/**
 * swap_int - swaps integers a and b
 * @a: pointer a
 * @b: pointer b
 *
 */

void swap_int(int *a, int *b)
{

	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
