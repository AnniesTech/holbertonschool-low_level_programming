#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	int b, a;

	for (b = 0; b <= 10; b++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar(10);
	}
}
