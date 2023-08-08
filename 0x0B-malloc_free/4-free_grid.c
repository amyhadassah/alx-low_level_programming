#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid.
 * @grid: The 2D grid.
 * @height: Height of the grid.
 *
 * Return: Void.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
