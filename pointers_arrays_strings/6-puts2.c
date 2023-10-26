#include "main.h"
#include <string.h>

/**
 * puts2 - print number that have impair cases number
 * @str: string
*/

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0 ; i <= (len - 1) ; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
