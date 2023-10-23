#include "main.h"

/**
 * print_line - print line in terminal
 * @n: line count
*/

void print_line(int n)
{
	int x = 0;

	for (; x < n ; x++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
