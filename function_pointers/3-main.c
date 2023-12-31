#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * main - entry point
 * @argc: numbre of arguments
 * @argv: elements
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (!ptr)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && num2 == 0) || (*argv[2] == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	printf("%d", ptr(num1, num2));
	printf("\n");
	return (0);
}
