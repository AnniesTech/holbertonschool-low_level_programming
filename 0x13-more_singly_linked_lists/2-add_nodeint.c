#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at
 * the beggining of a list
 * @head: Main node
 * @n: Value
 * Return: New node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (!tmp)
	{
		free(tmp);
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
