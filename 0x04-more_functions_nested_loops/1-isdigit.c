#include "main.h"

/**
 * _isupper - Checks for uppercase.
 * Return: 1 if it's digit, 0 if it's not.
 * @c: Variable.
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
