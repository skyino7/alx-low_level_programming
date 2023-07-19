#include "function_pointers.h"

/**
 * int_index - function
 * @array: array
 * @size: size
 * @cmp: compare
 * Return: index of first element
 * and return -1 when no element matches
 * and return -1 if size if less than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
