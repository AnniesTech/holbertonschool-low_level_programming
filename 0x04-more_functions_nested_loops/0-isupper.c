#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks for uppercase.
 * Return: 1 if it's uppercase, 0 if it's lowecase.
 * @c: Variable.
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else if (islower(c))
	{
		return (0);
	}
	return (c);
}
