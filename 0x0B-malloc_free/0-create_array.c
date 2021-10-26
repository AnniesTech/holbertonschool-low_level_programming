#include "main.h"

/**
 * create_array - Creates an array of chars.
 * @size: Size of the Array
 * @c: Char storaged
 * Return: Pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *ca;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}

	ca = malloc(sizeof(c) * size);

	if (ca == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < size; b++)
	{
		ca[b] = c;
	}

	return (ca);
}
