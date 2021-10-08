#include "main.h"

/**
 * print_triangle - prints a triangle using n variable
 * @size: Variable
 */

void print_triangle(int size)
{
	int a, j, n;

	n = size - 1;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(32);
				else
					_putchar(35);
			}
			n--;
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
