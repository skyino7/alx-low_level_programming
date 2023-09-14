#include "lists.h"

/**
 * print_dlistint - function
 * @h: nodes
 * Return: nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodes++;
	}

	return (nodes);

}
