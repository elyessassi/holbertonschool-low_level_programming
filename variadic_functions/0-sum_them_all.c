#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * 
*/

int sum_them_all(const unsigned int n, ...)
{
    va_list z;
    unsigned int i;
    unsigned int s = 0; 

    va_start(z, n);
    for (i = 0 ; i < n ; i++)
    {
        s = s + va_arg(z, const unsigned int);
    }
    return (s);
}