#include "main.h"
/**
 * *array_range - Creates an array of integers.
 * @min:Variable
 * @max: Variable
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
