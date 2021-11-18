#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: number given
 * @index: index of the bit
 *
 * Return: value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int tmp;

	if (index > 63)
		return (-1);

	tmp = (n >> index) & 1;

	return (tmp);
}
