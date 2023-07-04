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
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j || i + j == size -1)
			{
				sum = sum + a[i] + a[j];
			}
		}
		printf("%d\n", sum);
	}
}
