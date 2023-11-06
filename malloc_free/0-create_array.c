#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - allocate an array of caracters
 * @size: sçze of array
 * @c: character
 * Return: array
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size);
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < size ; i++)
			array[i] = c;
		return (array);
	}
}
