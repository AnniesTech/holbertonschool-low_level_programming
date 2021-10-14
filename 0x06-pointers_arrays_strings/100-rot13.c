#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @str: string
 * Return: to the string.
 */

char *rot13(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		while ((str[a] >= 'a' && str[a] <= 'z') ||
				(str[a] >= 'A' && str[a] <= 'Z'))
		{
			if ((str[a] >= 'a' && str[a] <= 'm') ||
					(str[a] >= 'A' && str[a] <= 'M'))
				str[a] += 13;
			else
				str[a] -= 13;
			a++;
		}
		a++;
	}
	return (str);
}
