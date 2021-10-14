#include "main.h"

/**
 * reverse_array - Reverses the content of an array of ints
 *@a: Array
 *@n: Number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int begin, end, aux;

	for (begin = 0, end = n - 1; begin < end; begin++, end--)
	{
		aux = a[begin];
		a[begin] = a[end];
		a[end] = aux;
	}
}
