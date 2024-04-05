#include "search_algos.h"

/**
*linear_search - linear searches a value
*@array: array to search in
*@size: size of array
*@value: value to search for
*Return: index of value
*/

int linear_search(int *array, size_t size, int value)
{
	size_t current_idx;

	if (array == NULL)
		return (-1);
	for (current_idx = 0 ; current_idx < size ; current_idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", current_idx, array[current_idx]);
		if ((array[current_idx]) == value)
		{
			return (current_idx);
		}
	}
	return (-1);
}
