#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function
 * @a: pointer
 * @size: integer
 *
 */

void print_diagsums(int *a, int size)
{
	int i, j, n, sum;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j || i + j == size -1)
			{
				sum = sum + a[i][j];
			}
		}
		printf("%d\n", sum);
	}
}
