#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: variable
 */

void rev_string(char *s)
{
	int a, c;
	char *begin, *end, temp;

	begin = s;
	end = s;
	a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}

	for (c = 0; c < a - 1; c++)
	{
		end++;
	}

	for (c = 0; c < a / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
