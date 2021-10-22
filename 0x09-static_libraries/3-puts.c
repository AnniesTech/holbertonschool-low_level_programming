#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 *@s: String to be printed
 */

void _puts(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	_putchar(10);
}
