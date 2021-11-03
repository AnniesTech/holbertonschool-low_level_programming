#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: Array of elements.
 * @size: size of the array.
 * @action: pointer to a function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array && size && action)
	{
		for (; a < size; a++)
		{
			(*action)(array[a]);
		}
	}
}
