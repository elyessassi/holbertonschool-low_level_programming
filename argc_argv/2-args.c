#include <stdio.h>

/**
 * main - entry point
 * @argc: num of arguments
 * @argv: arguments
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
