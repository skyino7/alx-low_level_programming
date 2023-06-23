#include "main.h"

/**
 * print_triangle
 * @size: number
 */

void print_triangle(int size)
{
	int m, n;

	for (m = 0; m < size; m++)
	{
		for (n = 0; n <= size; n++)
		{
			_putchar(35);
		}
		if (n <= size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
