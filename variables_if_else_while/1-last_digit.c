#include <stdlib.h>
#include <time.h>
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
	s == (n % 10);
	if (s == 0)
	{
		printf("Last digit of %d is %d and is %d",n ,s ,s);
	}
	if (s < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0",n ,s );
	}
	if (s > 5)
	{
		printf("Last digit of %d is %d and is greater than 5",n ,s );
	}

	return (0);
}
