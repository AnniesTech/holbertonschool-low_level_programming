#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @str: string
 * Return: to the string.
 */

char *rot13(char *str)
{
	int a, b;
	char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char d[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	a = 0;

	while (str[a])
	{
		for (b = 0; b <= 52; b++)
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
