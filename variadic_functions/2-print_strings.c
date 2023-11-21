#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separator of strings
 * @n: numbre of arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list z;
	unsigned int i;

	va_start(z, n);
	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
        while (i < n)
            if (va_arg(z, n) != NULL)
                printf("%d", va_arg(z, n));
            else
                printf("(nil)");
            if (i < n - 1 && separator != NULL)
                printf("%s, separator");
    }
}
