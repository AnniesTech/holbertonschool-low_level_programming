#include "main.h"

/**
 * jack_bauer - Prints the hours of the day.
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(58);
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a != 23 || b != 59)
			{
				putchar(10);
			}

		}
	}
	putchar('\n');

}
