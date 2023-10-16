#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int n;
	int s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is %d",n ,(n % 10) ,(n % 10) );
	}
	if ((n % 10) < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0",n ,(n % 10) );
	}
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5",n ,(n % 10) );
	}

	return (0);
}
