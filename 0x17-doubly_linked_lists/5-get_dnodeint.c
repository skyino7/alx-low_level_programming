#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: node
 * @index: index
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	size_t count = 0;

	curr = head;

	while (curr != NULL)
	{
		if (count == index)
			return (curr);
		count++;

		curr = curr->next;
	}

	return (NULL);
}
