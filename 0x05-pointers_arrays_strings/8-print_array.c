#include "main.h"

/**
 *print_array - Prints n elements of an array of integers
 * @a: Array
 * @n: represents the adress of the array
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x < (n - 1))
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d", a[x]);
		}
	}
}
