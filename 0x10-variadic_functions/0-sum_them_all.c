#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: Number of the arguments.
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lista;
	unsigned int i = 0;
	int suma = 0;

	if (n == 0)
		return (0);

	va_start(lista, n);

	for (; i < n; i++)
		suma += va_arg(lista, int);

	va_end(lista);
	return (suma);
}
