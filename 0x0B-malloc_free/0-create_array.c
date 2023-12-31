#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 *
 * @size: - size
 * @c: character
 *
 * Return: arr;
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}

	return (arr);
}
