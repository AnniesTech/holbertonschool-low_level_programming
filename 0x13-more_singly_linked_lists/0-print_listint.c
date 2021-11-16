#include "lists.h"
/**
  * print_listint - Prints all elements of a list
  * @h: List to print
  * Return: the number of nodes
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
