#include "main.h"

/**
 * _cuadrado - Finds the square of a number
 * @num: Number to be multiplied for the square root
 * @raiz: Equals to n in main function
 * Return: The square root of a number
 */

int _cuadrado(int num, int raiz)
{
	if (num > raiz)
		return (-1);
	else if (num * num == raiz)
		return (num);
	return (_cuadrado(num + 1, raiz));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Variable that contains numbers
 * Return: The results of _cuadrado
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_cuadrado(1, n));
}
