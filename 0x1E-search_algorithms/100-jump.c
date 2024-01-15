#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: index of value or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{

    size_t jump, start, end, prev;

    if (array == NULL)
        return (-1);

    jump = sqrt(size);
    prev = 0;

    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

        start = prev;
        end = prev + jump;

        if (end > size - 1)
            end = size - 1;

        if (array[start] <= value && array[end] >= value)
            break;

        prev += jump;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", start, end);

    while (array[start] <= value && start <= end)
    {
        printf("Value checked array[%lu] = [%d]\n", start, array[start]);

        if (array[start] == value)
            return (start);

        start++;
        if (start > end)
            break;
    }

    return (-1);

}