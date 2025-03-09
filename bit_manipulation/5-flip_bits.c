#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits needed to flip to
 * get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of bits flip needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	int i;
	int len_n = binary_length(n), len_m = binary_length(m), biggest;

	if (len_m >= len_n)
	{
		biggest = len_m;
	}
	else
	{
		biggest = len_n;
	}
	for (i = 0; i < biggest; i++)
	{
		if ((n & 1) != (m & 1))
		{
			num++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (num);
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
	int i = 0, x = n;

	while (x >= power(2, i))
	{
		i++;
	}
	return (i);
}
