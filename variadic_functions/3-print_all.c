#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>



/**
 * pc - fonc that prints a char
 * @a: allocated places
*/

void pc(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * pi - fonc that prints an int
 * @a: allocated places
*/

void pi(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
 * pf - fonc that prints a float
 * @a: allocated places
*/

void pf(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * ps - fonc that prints a string
 * @a: allocated places
*/

void ps(va_list a)
{
	printf("%s", va_arg(a, char *));
}


/**
 * print_all - main function
 * @format: string that has format characters
*/

void print_all(const char * const format, ...)
{
	va_list numarg;
	type_t typelist[] = {{'c', pc}, {'i', pi}, {'f', pf}, {'s', ps}};
	int i = 0;
	int j = 0;
	int k = 0;
	int len = strlen(format);
	void (*ffptr)(va_list);

	va_start(numarg, format);
	while (i < len)
	{
		while (j < 4)
		{
			if (format[i] == typelist[j].character)
			{
				ffptr = typelist[j].fptr;
				ffptr(numarg);
				if (k < len - 1)
				{
					printf(", ");
					k++;
				}
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(numarg);
}
