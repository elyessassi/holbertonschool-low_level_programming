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
	unsigned int i = 0;
	char *string;

	va_start(z, n);
	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		while (i < n)
		{
			string = va_arg(z, char *);
			if ((string) != NULL)
				printf("%s", string);
			else
				printf("(nil)");
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		printf("\n");
	}
}
