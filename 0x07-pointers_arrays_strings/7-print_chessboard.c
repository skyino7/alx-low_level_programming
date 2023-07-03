#include "main.h"

/**
 * print_chessboard - function
 * @a: prints board
 *
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 1; i < 8; i++)
	{
		for (j = 1; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}