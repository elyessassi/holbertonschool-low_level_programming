#include <stdio.h>

/**
 * main - entry point
 * @argc: num of arguments
 * @argv: arguments
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	printf("%d", argc);
	*argv = *argv;
	return (0);
}
