#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * Return: (1) if n greater than zero
 * (0) if n equals zero
 * (-1) if n is less than zero
 *@n: The character to print
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
