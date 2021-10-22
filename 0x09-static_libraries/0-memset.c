#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: pointer
 * @b: Constant type
 * @n: Memory area
 * Return: to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}
