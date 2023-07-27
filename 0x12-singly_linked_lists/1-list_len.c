#include "lists.h"

/**
 * list_len - function
 * @h: node
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t cnt;

	for (cnt = 0; h != NULL; cnt++)
	{
		h = h->next;
	}

	return (cnt);
}
