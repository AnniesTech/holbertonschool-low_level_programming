#include "lists.h"

/**
 * sum_listint - Function that return the sum of all the data
 * @head: Main node
 * Return: sum of all the data (n) of a linked list.
 */

int sum_listint(listint_t *head)
{
	int suma = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);
}
