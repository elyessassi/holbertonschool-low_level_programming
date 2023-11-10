#include <stdlib.h>

/**
 * array_range - fonction
 * @min: minimim
 * @max: maximum
 * Return: NULL or the array
*/

int *array_range(int min, int max)
{
	int *array;
	int i;
	int m;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	m = (max - min) + 1;
	array = (malloc(sizeof(int) * m));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = min,j = 0 ; i <= max && j <= m ; i++,j++)
	{
		array[i] = i;
	}
	return (array);
}
