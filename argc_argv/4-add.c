#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: num of arguments
 * @argv: arguments
 * Return: 1 or 0
*/

int main(int argc, char *argv[])
{
	int s = 0;
	int i;
	int j;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 1 ; j < argc ; j++)
		{
			if (isdigit(arg[i][j] == 0))
			printf("Error");
			printf("\n");
			return (1);
		}
	}
	if (argc == 1)
	{
		printf("0");
		printf("\n");
		return (0);
	}
	for (i = 1 ; i < (argc) ; i++)
	{
		s = s + atoi(argv[i]);
	}
	printf("%d", s);
	printf("\n");
	return (0);

}
