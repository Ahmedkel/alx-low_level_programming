#include "main.h"
/**
 * free_grid - Frees a 2D array of integers previously created by alloc_grid().
 * @grid: The 2D array of integers to be freed.
 * @height: The height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
