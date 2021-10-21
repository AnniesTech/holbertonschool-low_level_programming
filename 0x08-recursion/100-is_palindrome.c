#include "main.h"

/**
 * _endofstring - Moves the pointer to the end of the string
 * @s: Pointer
 * Return: 0
 */

int _endofstring(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _endofstring(s));
	}
	return (0);
}

/**
 * _palindrome - Checks if a word is palindrome
 * @s: String
 * @a: Position 1
 * @b: Position 2
 * Return: 1 is its palindrome, 0 otherwise.
 */

int _palindrome(char *s, int a, int b)
{
	if (a >= b)
	{
		return (1);
	}
	if  (s[a] == s[b])
	{
		return (_palindrome(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: String
 * Return: Answer
 */

int is_palindrome(char *s)
{
	int a = 0;
	int b = _endofstring(s);

	return (_palindrome(s, a, b - 1));
}
