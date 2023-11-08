#include <stdlib.h>

/**
 * **alloc_grid - 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: 2D array or NULL in case if failure
*/

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	array = malloc(height);
	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < width ; i++)
		array[i] = malloc(sizeof(int) * width);
	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j++)
		{
			array[i][j] = 0;
		}
	return (array);
}
