#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: integer 1
 * @b: integer 2
*/

void swap_int(int *a, int *b)
{
	int x = 0;

	x = *a;
	*a = *b;
	*b = x;
}
