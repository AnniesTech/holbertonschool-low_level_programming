#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: String
 * Return: to string
 */

char *cap_string(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a == 0)
		{
			if ((str[a] >= 97 && str[a] <= 122))
			{
				str[a] = str[a] - 32;
				continue;
			}
		}

		if (str[a] == ' ' || str[a] == '\n')
		{
			a++;
			if ((str[a] >= 97 && str[a] <= 122))
			{
				str[a] = str[a] - 32;
				continue;
			}
		}
	}
	return (str);
}
