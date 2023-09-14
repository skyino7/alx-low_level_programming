#include "lists.h"

/**
 * print_dlistint - function
 * @h: nodes
 * Return: nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodes++;
	}

	return (nodes);

}
