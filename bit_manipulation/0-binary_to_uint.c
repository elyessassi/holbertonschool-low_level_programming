#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to decimal
 * @b: binary number
 * Return: decimal number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int dec = 0, i = 0, l;

	if (b == NULL)
	{
		return (0);
	}
	l = strlength(b);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			if (*b == '1')
			{

				dec = dec + (power(2, l - i - 1));
			}
		}
		i++;
		b++;
	}
	return (dec);
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
 * strlength - function that gives the length of a given string
 * @s: the string to get its length
 * Return: the length
 */

int strlength(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
