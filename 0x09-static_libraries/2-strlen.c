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
