#include "lists.h"

/**
 * add_nodeint - function
 * @head: points to head node
 * @n: number
 * Return: the node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
