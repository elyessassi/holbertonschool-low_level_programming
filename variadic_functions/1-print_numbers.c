#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: separator of numbers
 * @n: numbre of arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list z;
	unsigned int i;

	va_start(z, n);
	printf("%d", va_arg(z, unsigned int));
	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		if (separator != NULL)
		{
			for (i = 0 ; i < (n - 1) ; i++)
			{
				printf("%s", separator);
				printf("%d", va_arg(z, unsigned int));
			}
			printf("\n");
		}
		else
		{
			for (i = 0 ; i < (n - 1) ; i++)
			{
				printf("%d", va_arg(z, unsigned int));
			}
			printf("\n");
		}
	}
}
