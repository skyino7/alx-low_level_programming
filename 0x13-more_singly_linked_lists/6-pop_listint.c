#include "lists.h"

/**
 * pop_listint - function
 * @head: head node to delete
 * Return: nd(data)
*/

int pop_listint(listint_t **head)
{
	listint_t *hold;
	int nd;

	if (head == NULL || *head == NULL)
		return (0);

	hold = *head;
	*head = (*head)->next;
	nd = hold->n;
	free(hold);

	return (nd);
}
