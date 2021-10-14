#include "main.h"

/**
 * _strncat - Concatenates two strings using the n bytes
 * and src doesn't have to bee null terminated
 * Return: dest
 * @dest: String 1
 * @src: String 2
 * @n: Variable
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	for (; dest[a] != '\0'; a++)
		;
	for (; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
