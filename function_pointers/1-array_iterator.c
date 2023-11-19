#include "function_pointers.h"

/**
 * array_iterator - fonction pointer that uses fonction on each element of the array
 * @array: the array
 * @size: size of the array
 * @action: the fonction pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;

    for (i = 0 ; i < size ; i++)
        action(array[i]);
}
