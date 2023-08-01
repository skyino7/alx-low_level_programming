#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: double pointer
 * @n: number
 * Return: node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode, *current;

	endNode = malloc(sizeof(listint_t));

	if (endNode == NULL)
		return (NULL);

	endNode->n = n;
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = endNode;
	}

	return (endNode);

}
