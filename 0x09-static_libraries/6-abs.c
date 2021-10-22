#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @a: integer that will be calculated
 * Return: return to a
 */

int _abs(int n)
{
	if (n < 0)

		(n *= -1);

	return (n);
}