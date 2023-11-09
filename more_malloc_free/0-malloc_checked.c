#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: int
*/

void *malloc_checked(unsigned int b)
{
    int *array;

    array = malloc(b);
    if (array == NULL)
        return (NULL);
    return (array);
}