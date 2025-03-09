#include <stdio.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @index: the index
 * @n: the number that we search in for the bit
 * Return: 1 or 0 or -1 in case of an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = binary_length(n);

	if (index > len - 1)
	{
		return (-1);
	}
	if ((power(2, index) & n) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/**
 * power - function that returns x ^ y
 * @x: number to multiplay
 * @y: number of times to multiplay
 * Return: x ^ y
 */

int power(int x, int y)
{
	int i, res = 1;

	if (y == 0)
	{
		return (1);
	}

	for (i = 0; i < y; i++)
	{
		res = res * x;
	}
	return (res);
}

/**
 * binary_length - function that searches for the binary length of a number
 * @n: the number
 * Return: the length
 */

int binary_length(unsigned long int n)
{
	int i = 1, x = n;

	while (x >= power(2, i))
	{
		i++;
	}
	return (i);
}
