#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 on failure
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low = 0, high = size - 1, mid;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound < size)
		high = bound;

	low = bound / 2;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (bound = low; bound <= high; bound++)
		{
			printf("%d", array[bound]);
			if (bound < high)
				printf(", ");
			else
				printf("\n");
		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
