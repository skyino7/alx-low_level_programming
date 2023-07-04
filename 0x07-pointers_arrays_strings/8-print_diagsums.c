#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - function
 * @a: pointer
 * @size: integer
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j = size - 1, sum_a = 0, sum_b = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		sum_a = sum_a + a[i];
	}

	for (; j < (size * size - 1); j = j + size - 1)
	{
		sum_b = sum_b + a[j];
	}

	printf("%d, %d\n", sum_a, sum_b);
}
