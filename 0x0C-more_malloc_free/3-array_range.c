#include "main.h"
#include <stdlib.h>

/**
 *
 */

int *array_range(int min, int max)
{
	int size, *array, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}

	return (array);
}
