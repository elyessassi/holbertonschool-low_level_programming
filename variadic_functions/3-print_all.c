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
	char *str = va_arg(a, char *);

	if (!str)
	{
		str = "(nil)";
	}
	printf("%s", str);
}


/**
 * print_all - main function
 * @format: string that has format characters
*/

void print_all(const char *const format, ...)
{
	int i = 0;
	int j;
	char *sep1 = "";
	char *sep2 = ", ";
	va_list x;

	type_t types[] = {
		{'c', pc},
		{'i', pi},
		{'f', pf},
		{'s', ps},
		{'\0', NULL},
	};
	va_start(x, format);
	while (format[i])
	{
		j = 0;
		while (types[j].character)
		{
			if (format[i] == types[j].character)
			{
				printf("%s", sep1);
				types[j].fptr(x);
				sep1 = sep2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(x);
}

