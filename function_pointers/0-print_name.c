#include "function_pointers.h"

/**
 * print_name - fonction that prints name
 * @name: string
 * @f: fonction pointer that points to fonctions displayng name
*/

void print_name(char *name, void (*f)(char *))
{
	if ((name) && f)
		f(name);
}
