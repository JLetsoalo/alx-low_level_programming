#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: array grid
 */

int **alloc_grid(int width, int height)
{
	int x, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		grid[x] = (int *)malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (j = 0; j < x; j++)
			{
				free(grid[j]);
			}
			
			free(grid);
			
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[x][j] = 0;
		}
	}

	return (grid);
}

