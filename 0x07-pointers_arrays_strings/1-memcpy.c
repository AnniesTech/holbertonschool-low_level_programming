#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: place where it will be copied
 * @src: information that will be copied
 * @n: Variable
 * Return: to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
