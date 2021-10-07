#include "main.h"

/**
 * print_line - prints '-' n times
 *@n: Variable
 */

void print_line(int n)
{
	int a;

	a = 0;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
	}

	_putchar(10);
}
