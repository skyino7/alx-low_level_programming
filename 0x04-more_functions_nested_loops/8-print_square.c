#include "main.h"

/**
 * print_square - function
 *
 * @size: number
 */

void print_square(int size)
{
	int n, m;

	for (n = 0; n < size; n++)
	{
		for (m = 0; m < size; m++)
		{
			_putchar(35);
		}
		if (n != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
