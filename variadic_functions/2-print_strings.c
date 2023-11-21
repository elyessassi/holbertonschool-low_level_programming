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
	if (n == 0)
	{
		printf("\n");
	}
	else
	{
		printf("%s", va_arg(z, char *));
		if (separator != NULL)
		{
			for (i = 0 ; i < (n - 1) ; i++)
			{
				printf("%s", separator);
                if (va_arg(z, char*) != NULL)
				    printf("%s", va_arg(z, char*));
                else
                    printf("(nil)");
			}
			printf("\n");
		}
		else
		{
			for (i = 0 ; i < (n - 1) ; i++)
			{
                if (va_arg(z, char*) != NULL)
				    printf("%s", va_arg(z, char *));
                else
                    printf("(nil)");
			}
			printf("\n");
		}
	}
}
