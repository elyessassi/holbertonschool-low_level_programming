
#include <stdio.h>

/**
 *main - entry point
 *fizzbuzz - a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz
 *Return: always 0
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
			printf("%d",x );
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
