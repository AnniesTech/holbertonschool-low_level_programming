#include "main.h"

/**
 * print_times_table - prints the tables using variable n
 *@n: Variable that contains numbers
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = (a * b);
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
				}
				if (c < 10 && b != 0)
				{
					_putchar(32);
					_putchar(32);
					_putchar((c % 10) + '0');
				}
				else if (c >= 10 && c < 100)
				{
					_putchar(32);
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c >= 100 && b != 0)
				{
					_putchar((c / 100) + '0');
					_putchar((c / 10) % 10 + '0');
					_putchar((c % 10) + '0');
				}
				else
					_putchar((c % 10) + '0');
			}
			_putchar(10);
		}
	}
}
