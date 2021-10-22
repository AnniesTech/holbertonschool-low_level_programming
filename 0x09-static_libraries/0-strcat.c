#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String 1
 * @src: String 2
 * Return: To dest, so string 1.
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	for (; dest[a] != '\0'; a++)
		;
	for (; src[b] != '\0'; a++, b++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
