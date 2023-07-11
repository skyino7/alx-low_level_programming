#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: grid pointer
 * @height: height
 * Return: 0 when successful
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
