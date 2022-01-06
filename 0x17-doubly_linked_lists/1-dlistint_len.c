#include "lists.h"

/**
 * dlistint_len -  function that returns the number of
 * elements in a linked dlistint_t list.
 *
 *@h: head of the list
 *Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int contador = 0;

	if (h == NULL)
		return (contador);

	/*while (h->prev != NULL)
	{
		h = h->prev;
	}*/

	while (h != NULL)
	{
		h = h->next;
		contador++;
	}
	return (contador);
}
