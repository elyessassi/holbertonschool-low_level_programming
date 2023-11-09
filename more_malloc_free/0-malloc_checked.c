#include <stdlib.h>

/**
 * 
*/

void *malloc_checked(unsigned int b)
{
    int *array;

    array = malloc(b);
    if (array == NULL)
        return (NULL);
    return (array);
}