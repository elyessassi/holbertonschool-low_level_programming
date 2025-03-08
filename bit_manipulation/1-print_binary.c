#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints a number in binary
 * @n: the number to print in binary
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	if (n == 1)
	{
		_putchar('1');
	}
	if (n > 1)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
