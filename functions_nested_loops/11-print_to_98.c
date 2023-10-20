#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - a function that prints all natural numbers from n to 98
 *@n: int to test
*/

void print_to_98(int n)
{
	printf("%d", n);
	while (n != 98)
	{

		if (n < 98)
		{
			n++;
			printf(", %d", n);

		}
		if (n > 98)
		{
			n--;
			printf(", %d", n);

		}

	}
	printf("\n");
}
