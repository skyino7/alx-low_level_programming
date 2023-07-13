#include "main.h"
#include <stdlib.h>
#include <string.h>

int min(int a, int b);

/**
 * _realloc - function
 * @ptr: pointer
 * @old_size: old_size
 * @new_size: new_size
 *
 * Return: new_ptr
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		new_ptr = malloc(new_size);

		copy_size = min(old_size, new_size);

		memcpy(new_ptr, ptr, copy_size);

		free(ptr);

		return (new_ptr);
	}
}

/**
 * min - function
 * @a: integer
 * @b: integer
 *
 * Return: a or b
 */

int min(int a, int b)
{
	if (a < b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}
