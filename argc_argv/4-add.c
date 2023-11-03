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
	int s;
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		if (isdigit(argv[i] == 0))
		{
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
	for (i = 1 ; i < (argc - 1) ; i++)
	{
		s = atoi(argv[i]) + atoi(argv[i + 1]);
	}
	printf("%d", s);
	printf("\n");
	return (0);

}
