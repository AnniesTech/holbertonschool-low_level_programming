#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 but not the 2 and 3
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar(10);
}
