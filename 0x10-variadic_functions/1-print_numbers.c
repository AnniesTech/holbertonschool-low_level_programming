#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int i = 0;

	va_start(lista, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(lista, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lista);
}
