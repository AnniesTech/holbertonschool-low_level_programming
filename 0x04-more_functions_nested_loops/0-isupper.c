#include "main.h"

/**
 * _isupper - Checks for uppercase.
 * Return: 1 if it's uppercase, 0 if it's lowecase.
 * @c: Variable.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (c);
}
