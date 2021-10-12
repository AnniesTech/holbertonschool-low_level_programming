#include "main.h"

/**
 * puts_half - Prints the last half of the string
 * @str: Variable
 */

void puts_half(char *str)
{
	int a, b, c;

	a = 0;

	while (*(str + a) != '\0')
	{
		a++;
	}
	if (a / 2 != 0)
	{
		c = (a + 1) / 2;
	}
	else
	{
		c = (a / 2);
	}

	for (b = c; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar(10);
}
