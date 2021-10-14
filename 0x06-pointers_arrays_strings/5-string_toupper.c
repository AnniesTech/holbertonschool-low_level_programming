#include "main.h"

/**
 * string_toupper - Changes all lowercase letter to uppercase
 * @a: Pointer
 * Return: to a
 */

char *string_toupper(char *a)
{
	int b = 0;

	while (a[b] != '\0')
	{
		if (a[b] >= 97 && a[b] <= 122)
		{
			a[b] = a[b] - 32;
		}
		b++;
	}
	return (a);
}
