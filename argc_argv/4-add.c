#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - entry point
 * @argc: num of arguments
 * @argv: arguments
 * Return:
*/

int main(int argc, char *argv[])
{
	int i;
	unsigned long int j;
	int s = 0;

	if (argc == 1)
	{
		printf("0");
		printf("\n");
	}

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; j < strlen(argv[i]) ; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error");
				printf("\n");
				return (1);
			}
		}

	}
	for (i = 1 ; i < argc ; i++)
	{
		s = s + atoi(argv[i]);
	}
	printf("%d", s);
	printf("\n");

	return (0);

}
