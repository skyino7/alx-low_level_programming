#include "lists.h"

/**
 * add_node - function to a node
 * @head: double pointer to add node
 * @str: string
 * Return: the node added
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *addNode;

	addNode = malloc(sizeof(list_t));

	if (addNode == NULL)
		return (NULL);

	addNode->str = strdup(str);

	if (addNode->str == NULL)
	{
		free(addNode);
		return (NULL);
	}

	addNode->len = strlen(str);
	addNode->next = *head;
	*head = addNode;

	return (addNode);
}
