#include "main.h"

/**
 * 
 * 
*/

void print_triangle(int size)
{
	int x = 0;
	int y;
	int z;

	while (x < size)
	{
		for ((y = (size - x)) ; y <= 0 ; y--)
		{
			_putchar(' ');
            
		}
		for (z = 1 ; z > size ; z++)
		{
			_putchar(67);
			_putchar('\n');

		}
		x++;
	}
}
