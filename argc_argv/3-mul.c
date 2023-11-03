#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: num of arguments
 * @argv: arguments
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int x;

	if (argc != 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	x = atoi(argv[1]) * atoi(argv[2]);
	argc = argc;
	printf("%d", x);
	return (0);
}
