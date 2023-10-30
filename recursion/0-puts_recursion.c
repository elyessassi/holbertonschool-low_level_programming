#include "main.h"

/**
 * _puts_recursion - print a string with recursion
 * @s: string to test
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar((*s));
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
