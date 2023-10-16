#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%lu is positive")
	}
	if (n==0)
	{
		printf("%lu is zero")
	}
	if (n<0)
	{
		printf("%lu is negative")
	}
	return (0);
}
