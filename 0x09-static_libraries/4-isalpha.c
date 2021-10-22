#include "main.h"

/**
 * _isalpha - Checks for lower case character.
 *
 * Return: Always 1 if is alphabetic char else return 0
 *@c: The character to print
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
