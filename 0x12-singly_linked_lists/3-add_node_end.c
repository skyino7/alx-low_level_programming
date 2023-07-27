#include "lists.h"
/**
 * add_node_end - functiion
 * @head: double pointer to head
 * @str: pointer to string
 * Return: addNode
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *addNode, *current;

	addNode = malloc(sizeof(list_t));

	if (addNode == NULL)
		return (NULL);

	addNode->str = strdup(str);
	if (addNode->str == NULL)
	{
		return (NULL);
	}

	addNode->len = strlen(str);
	addNode->next = NULL;

	if (*head == NULL)
	{
		*head = addNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
	current->next = addNode;
	}

	return (addNode);

}
