	#include "main.h"

	/**
	 *print_triangle - prints a triangle
	 *@size: number of lines
	*/

	void print_triangle(int size)
	{
		int i;
		int j;
		int ns;

		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i = 1 ; i <= size ; i++)
			{
				ns = size - i;
				for (j = 1 ; j <= size ; j++)
				{
					if (j <= ns)
						_putchar(32);
					else
						_putchar(35);
				}
				_putchar('\n');
			}
		}
	}
