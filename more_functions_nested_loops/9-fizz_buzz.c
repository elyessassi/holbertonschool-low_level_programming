
#include <stdio.h>

/**
 * fizz_buzz - program that prints fizz buzz game from 1 to 100
 * Return: always 0
*/

void fizz_buzz(void)
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
			printf("%d", x);
			printf(" ");
		}
	}
	printf("Buzz");
	printf("\n");
}

int main(void)
{
	fizz_buzz();
	return (0);
}
