#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: to the string.
 */

char *leet(char *str)
{
	int a, b;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	a = 0;

	while (str[a])
	{
		for (b = 0; b <= 9; b++)
		{
			if (str[a] == c[b])
			{
				str[a] = d[b];
			}
		}
		a++;
	}
	return (str);
}
