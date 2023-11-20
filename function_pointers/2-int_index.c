#include "function_pointers.h"

/**
 * int_index - uses fonction on each element of the array
 * @array: the array
 * @size: size of the array
 * @cmp: the fonction pointer
 * Return: index of element wanted
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array = NULL || size == NULL)
		return (-1);
	while (i < size)
	{
		if (!(cmp(array[i])))
			i++;
		else
			return (i);
	}
	return (-1);
}
