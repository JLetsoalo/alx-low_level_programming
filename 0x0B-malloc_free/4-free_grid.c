#include "main.h"
#include <stdlib.h>

/**
 * free_grid - cfreeing alloted memory space
 * @grid: occupied memory to clear
 * @height: size of memory to free
 * Return: freed memory size
 */

void free_grid(int **grid, int height)
{
	int x;

	x = 0;
	if (grid == NULL)
		free(grid);

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
