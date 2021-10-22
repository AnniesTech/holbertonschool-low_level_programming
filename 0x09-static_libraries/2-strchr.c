#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: String
 * @c: Char
 * Return: S, or null if char is not found
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
