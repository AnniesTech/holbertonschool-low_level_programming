#include "lists.h"

/**
 * pop_listint - Function that deletes the head node
 * and returns the head node’s data
 * @head: Main node
 * Return: Head node's
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int pmt;

	if (!*head)
	{
		return (0);
	}
	tmp = (*head)->next;
	pmt = (*head)->n;
	free(*head);
	*head = tmp;

	return (pmt);
}
