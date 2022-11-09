#include "main.h"

/**
 * free_grid - frees space to a 2 dimensional array
 * @grid: grid
 * @height: height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
