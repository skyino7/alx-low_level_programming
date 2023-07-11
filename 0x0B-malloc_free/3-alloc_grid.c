#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - grid function
 * @width: width integer
 * @height: height integer
 * Return: 0 when successful
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(grid[j]);
				grid[j] = NULL;
			}
			free(grid);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
