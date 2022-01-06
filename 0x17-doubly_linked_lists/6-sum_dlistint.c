#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 *
 * @head: Main node
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
