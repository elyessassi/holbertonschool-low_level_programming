#include "main.h"
#include <string.h>

/**
 * puts_half - print the last half of a string
 * @str: string
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int x;

	if ((len % 2) == 0)
	{
		for (x = ((len / 2) + 1) ; x <= len ; x++)
		{
			_putchar(str[x - 1]);
		}
	}
	else
	{
		len = len - 1
		for (x = ((len / 2) + 1) ; x <= len ; x++)
		{
			_putchar(str[x]);
		}
	}
}
