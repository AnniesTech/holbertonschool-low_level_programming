#include "lists.h"
/**
 * listint_len - Function that returns the number of elements
 * in a linked list
 * @h: List to print
 * Return: Number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t tmp = 0;

	while (h)
	{
		h = h->next;
		tmp++;
	}
	return (tmp);
}
