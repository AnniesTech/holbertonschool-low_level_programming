#include "main.h"

/**
 * _strlen - Returns the length of a string
 *@s: Variable
 *Return: a
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: String
 * Return: On success, returns a pointer to the duplicated string,
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *copy;
	int a;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = malloc(sizeof(char) * _strlen((str) + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
	{
		copy[a] = str[a];
	}

	copy[a] = '\0';
	return (copy);
}
