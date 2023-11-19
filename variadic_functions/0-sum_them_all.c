#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - fonction that sums all arguments
 * @n: numbre of variadic arguments
 * Return: sum of arguments
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
