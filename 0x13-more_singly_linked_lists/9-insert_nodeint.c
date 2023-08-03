#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: head node
 * @idx:index of the list
 * @n: number
 * Return: addNode
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *addNode, *current;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	if (idx == 0)
	{
		addNode = malloc(sizeof(listint_t));

		if (addNode == NULL)
			return (NULL);

		addNode->n = n;
		addNode->next = *head;
		*head = addNode;
		return (addNode);
	}

	current = *head;
	for (i = 0; i < idx; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	if (current == NULL)
		return (NULL);
	addNode = malloc(sizeof(listint_t));

	if (addNode == NULL)
		return (NULL);
	addNode->n = n;
	addNode->next = current->next;
	current->next = addNode;

	return (addNode);
}
