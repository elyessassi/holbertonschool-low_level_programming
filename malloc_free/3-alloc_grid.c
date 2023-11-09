#include <stdlib.h>

/**
 * **alloc_grid - 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: 2D array or NULL in case if failure
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	array = malloc(sizeof(int *) * height);
	for (i = 0 ; i < height ; i++)
	{
		array[i] = malloc(sizeof(int) * width);
	}

	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
