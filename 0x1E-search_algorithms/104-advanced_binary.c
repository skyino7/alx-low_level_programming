#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 *                   using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 on failure
 */

int advanced_binary(int *array, size_t size, int value)
{
size_t low = 0, high = size - 1, mid, i;

if (array == NULL || size == 0)
return (-1);

while (low <= high)
{
printf("Searching in array: ");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
else
printf("\n");
}
mid = (low + high) / 2;
if (array[mid] < value)
low = mid + 1;
else if (array[mid] > value)
high = mid;
else if (mid == 0 || array[mid - 1] != value)
return (mid);
else
high = mid;
}
return (-1);
}
