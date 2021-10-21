#include "main.h"

/**
 * is_prime_number - function that
 * returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: Variable that cointains numbers
 * Return: 1 if is prime, 0 if is not.
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 0 || n == 1 || n % 2 == 0 || n % 3 == 0 ||
		n % 5 == 0 || n % 7 == 0 || n % 11 == 0 || n % 13 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
