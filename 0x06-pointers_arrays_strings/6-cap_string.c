#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: String
 * Return: to string
 */

char *cap_string(char *str)
{
	int a = 0;

	if (str[a] >= 97 && str[a] <= 122)
	{
		str[a] -= 32;
	}
	while (str[a] != '\0')
	{
		if (str[a] == ' ' || str[a] == '\n' || str[a] == '\t'
			|| str[a] == ',' || str[a] == ';' || str[a] == '.'
			|| str[a] == '!' || str[a] == '?' || str[a] == '"'
			|| str[a] == '(' || str[a] == ')' || str[a] == '{'
			|| str[a] == '}')
		{
			if (str[a + 1] >= 97 && str[a + 1] <= 122)
			{
				str[a + 1] -= 32;
			}
		}
		a++;
	}
	return (str);
}
