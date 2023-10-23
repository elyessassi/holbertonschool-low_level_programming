
#include <stdio.h>

/**
 * main - entry point
 * fizzbuzz - fizzbuzz test
 * Return: always 0
*/

void fizzbuzz(void)
{
	int x;

	for (x = 1 ; x < 100 ; x++)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		if ((x % 3) == 0 && (x % 5) != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		if ((x % 3) != 0 && (x % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		if ((x % 3) != 0 && (x % 5) != 0)
		{
			printf("%d" ,x);
			printf(" ");
		}
	}
	printf("Buzz");
	printf("\n");
}

int main(void)
{
	fizzbuzz();
	return (0);
}
