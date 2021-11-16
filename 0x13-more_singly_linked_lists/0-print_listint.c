#include "lists.h"

/**
 * print_list - Prints all the elements of a list
 * @h: Variable
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t tmp = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		tmp++;
	}
	return (tmp);
}
