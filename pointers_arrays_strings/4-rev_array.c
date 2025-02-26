#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function that reverses an array
 * @a: the array to reverse
 * @n: length of the array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int s = 0, f = n - 1;

	while (s != f || s < f)
	{
		temp = a[s];
		a[s] = a[f];
		a[f] = temp;
		s++;
		f--;
	}
}
