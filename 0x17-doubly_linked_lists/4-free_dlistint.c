#include "lists.h"

/**
 * free_dlistint - function
 * @head: node
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp =  NULL;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
