#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: Array of elements
 * @size: size of the array
 * @cmp: Pointer to a function
 * Return: -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	else
	{
		for (; a < size; a++)
		{
			if (cmp(array[a]))
				return (a);
		}
	}
	return (-1);
}
