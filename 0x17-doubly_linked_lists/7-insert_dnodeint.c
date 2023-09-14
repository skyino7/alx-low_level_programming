#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: node
 * @idx: index
 * @n:  number
 * Return: NULL or New Node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *new = NULL;
	unsigned int count = 0;

	while (curr != NULL && count < idx)
	{
		curr = curr->next;
		count++;
	}

	if (count != idx && idx != 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
	}
	else
	{
		new->prev = curr->prev;
		new->next = curr;

		if (curr->prev != NULL)
			curr->prev->next = new;

		curr->prev = new;
	}

	return (new);
}
