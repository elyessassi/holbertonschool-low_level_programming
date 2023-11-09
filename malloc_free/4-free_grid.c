#include <stdlib.h>

/**
 * free_grid - frees a 2d array
 * @grind: double pointer
 * @height: heght of arrray
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
