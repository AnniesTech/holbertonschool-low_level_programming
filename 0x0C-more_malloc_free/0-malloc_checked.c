#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: variable.
 * Return:pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
