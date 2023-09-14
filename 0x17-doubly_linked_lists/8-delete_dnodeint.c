#include "lists.h"
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	while (curr != NULL && count < index)
	{
		curr = curr->next;
		count++;
	}

	if (count != index)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		curr->prev->next = curr->next;
		if (curr->next != NULL)
			curr->next->prev = curr->prev;
	}

	free(curr);

	return (1);
}
