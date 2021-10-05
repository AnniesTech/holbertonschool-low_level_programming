#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @a: Number that will be print
 * Return: return to a
 */

int print_last_digit(int a)
{
	int n;

	n = a % 10;

	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
