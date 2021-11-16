#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node
 * @head: head of the list
 * @idx: Index
 * @n: Variable
 * Return: New node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *tmp = *head;
	listint_t *n_node = malloc(sizeof(listint_t));

	if (!n_node)
	{
		free(n_node);
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;

	if (!head)
		return (NULL);

	if (head != NULL && idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	tmp = *head;

	while (count < idx - 1)
	{
		tmp = tmp->next;

		if (tmp == NULL)
		{
			return (NULL);
		}
		count++;
	}
	n_node->next = tmp->next;
	tmp->next = n_node;

	return (n_node);
}
