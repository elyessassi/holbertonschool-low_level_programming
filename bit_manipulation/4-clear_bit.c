#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: the number to manipulate its bits
 * @index: the index
 * Return: number with changed bit for success -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len = binary_length(*n);

	if (index > len - 1)
	{
		return (-1);
	}
	*n = (*n ^ power(2, index));
	return (*n);
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
