#include "main.h"

/**
 * swap_int - Swaps the values of the varyables
 * @a: Var #1
 * @b: Var #2
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
