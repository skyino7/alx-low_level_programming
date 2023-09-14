#include "lists.h"

/**
 * sum_dlistint - function
 * @head: node
 * Return: 0 & sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	int sum = 0;

	curr = head;

	if (curr == NULL && head == NULL)
		return (0);

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
