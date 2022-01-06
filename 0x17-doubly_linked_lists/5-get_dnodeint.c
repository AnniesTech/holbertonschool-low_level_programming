#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node
 * of a dlistint_t linked list.
 *
 * @head: Main node
 * @index: index of the nth node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
