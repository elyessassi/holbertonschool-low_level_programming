#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that sums the two diagonals
 * @a: the 2d array (square)
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, sumL = 0, sumR = 0;
	int *p = a + size - 1;

	for (i = 0; i < size; i++)
	{
		sumL = sumL + *a;
		a = a + size + 1;
	}
	printf("%d", sumL);
	printf(" ,");
	for (i = 0; i < size; i++)
	{
		sumR = sumR + *p;
		p = p + size - 1;
	}
	printf("%d", sumR);
	printf("\n");
}
