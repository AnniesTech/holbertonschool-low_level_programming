#include "main.h"

/**
 * _strcmp - Compares two strings
 *@s1: String 1
 *@s2: String 2
 *Return: string 1 - string 2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++, s2++;
	}
	return (*s1 - *s2);
}
