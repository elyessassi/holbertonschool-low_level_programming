#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: int
 * Return: pointer to array
 */

void *malloc_checked(unsigned int b)
{
	int *array;

	array = malloc(b);
	if (array == NULL)
		return (98);
	return (array);
}