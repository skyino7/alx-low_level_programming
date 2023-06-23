#include "main.h"

/**
 * print_diagonal - function
 *
 * @n: number
 *
 */

void print_diagonal(int n)
{
	int i, l;

	for (i = 0; i < n; i++)
	{
		for (l = 0; l < i; l++)
		{
			_putchar(' ');
		}
		_putchar(92);

		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
