#include "lists.h"

/**
 * free_dlistint -  function that frees a dlistint_t list.
 *
 * @head:Main node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
