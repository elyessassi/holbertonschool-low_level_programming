#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - array to print its content
 * @a: array
 * @n: number of elements
*/

void print_array(int *a, int n)
{
	int x;

	if (n > 0)
	{
		printf("%d", a[0]);
		for (x = 1 ; x < n ; x++)
		{
			printf(",");
			printf(" ");
			printf("%d", a[x]);
		}
		printf("\n");
	}
	else
		printf("\n"),
}
