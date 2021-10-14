#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: String
 * Return: to string
 */

char *cap_string(char *str)
{
	int a = 0;

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

		if (str[a] == ' ' || str[a] == '\n' || str[a] == '\t'
			|| str[a] == ',' || str[a] == ';' || str[a] == '.'
			|| str[a] == '!' || str[a] == '?' || str[a] == '"'
			|| str[a] == '(' || str[a] == ')' || str[a] == '{'
			|| str[a] == '}')
		{
			++a;
			if ((str[a] >= 97 && str[a] <= 122))
			{
				str[a] = str[a] - 32;
				continue;
			}
		}
	}
	return (str);
}
