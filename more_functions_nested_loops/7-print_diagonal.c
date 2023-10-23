#include "main.h"

/**
 * 
*/

void print_diagonal(int n)
{
	int x = 0;
	int y = 0;

	if (n > 0)
	{
		for (x = 0 ; x <= n ; x++)
		{
			for (y = 0 ; y < n ; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	if (n == 0)
		_putchar('\n');
}