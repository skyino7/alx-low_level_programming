#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: head node
 * @n: number
 * Return: New node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *curr;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		curr = *head;

		while (curr->next != NULL)
			curr = curr->next;

		curr->next = new;
		new->prev = curr;
	}

	return (new);

}
