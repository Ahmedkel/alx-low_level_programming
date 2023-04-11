#include "main.h"
/**
 * alloc_grid - Allocates memory for a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If memory allocation fails or either width or height is zero or
 *         negative - NULL.
 *         Otherwise - a pointer to the newly-allocated space in memory
 *         containing the 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
		return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	
	return (grid);
}
