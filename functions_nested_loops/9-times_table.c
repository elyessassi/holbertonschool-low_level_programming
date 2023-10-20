#include "main.h"
#include <stdio.h>

/**
 *times_table - a function that prints the 9 times table
 *@x: int to test
 *@y: int to test
 *@multi: int to test
*/

void times_table(void)
{
	int x;
	int y;
	int multi;
	


	for (x = 0; x <= 9 ; x++)
	{

		_putchar('0');
		for (y = 1 ; y <= 9 ; y++)
		{
			multi = x*y;
			if (y <= 9)
				{
					_putchar(',');
				}
			if (y*x < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');

				
			}
		}
	_putchar('\n');
	}
}
