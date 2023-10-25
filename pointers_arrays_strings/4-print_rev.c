#include "main.h"

/**
 * print_rev - print the reverse of a string
 * @s: pointer
*/

void print_rev(char *s)
{
	int x;
	int i;

	while (s[x] !='\0') 
	{
		x++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
