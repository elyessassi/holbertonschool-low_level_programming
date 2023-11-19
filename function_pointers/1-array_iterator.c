#include "function_pointers.h"

/**
 * array_iterator - uses fonction on each element of the array
 * @array: the array
 * @size: size of the array
 * @action: the fonction pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && action)
	{
		for (i = 0 ; i < size ; i++)
			action(array[i]);
	}
}
