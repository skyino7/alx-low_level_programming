#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
    int low, high, mid, i;

    if (array == NULL)
        return (-1);

    low = 0;
    high = size - 1;

    while (low <= high)
    {

        mid = (low + high) / 2;

        printf("Searching in array: ");
        for (i = low; i <= high; i++) {
            printf("%d", array[i]);
            if (i < high) {
                printf(", ");
            }
        }
        printf("\n");

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;

    }

    return (-1);
}
