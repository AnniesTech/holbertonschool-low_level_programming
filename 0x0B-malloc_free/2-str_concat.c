#include "main.h"

/**
 * _strncat - Concatenates two strings using the n bytes
 * and src doesn't have to bee null terminated
 * Return: dest
 * @dest: String 1
 * @src: String 2
 */

char *_strncat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (b = 0; src[b] != '\0'; a++, b++)
	{
		dest[a] = src[b];
	}
	return (dest);
}

/**
 * str_concat - Concate s1 and s2.
 * @s1: First array.
 * @s2: Second array.
 * Return: The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int s1len, s2len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1len = 0; s1[s1len] != '\0'; s1len++)
	{
		continue;
	}
	for (s2len = 0; s2[s2len] != '\0'; s2len++)
	{
		continue;
	}

	s = malloc(sizeof(char) * ((s1len + s2len) + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	_strncat(s, s1);
	_strncat(s, s2);
	s += '\0';
	return (s);
}
