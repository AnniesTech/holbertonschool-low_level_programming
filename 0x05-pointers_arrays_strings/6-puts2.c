#include "main.h"

/**
 * puts2 - Prints every other character of a string"
 * @str: string to be printed
 */

void puts2(char *str)
{
	int a, b;

	a = 0;

	while (*(str + a) != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b += 2)
	{
		_putchar(*(str + b));
	}

	_putchar(10);
}
