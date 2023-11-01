#include "main.h"

/**
 * sqthelper - fonction that determines the square root of n
 * @n: integer
 * @i: integer
 * Return: i or -1
*/
int sqthelper(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	else if ((i * i) == n)
		return (i);
	return (sqthelper(n, i + 1));
}
/**
 * _sqrt_recursion - fonction that determines the sign of n and executes the fonction sqthelper
 * @n: integer
 * Return: i or -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqthelper(n, 1));
}
