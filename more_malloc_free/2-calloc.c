#include <stdlib.h>

/**
 * _calloc - fonction that allocates memory for array
 * @nmemb: int
 * @size: int
 * Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;
	return (array);
}
