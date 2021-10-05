#include "main.h"

/**
 * _islower - Checks for lower case character.
 *
 * Return: Always 1 if is lowercase else return 0
 *@c: The character to print
 */

int _islower(int c)
{
	
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
