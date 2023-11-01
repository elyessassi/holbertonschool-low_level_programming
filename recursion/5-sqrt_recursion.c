#include "main.h"

/**
 * sqthelper - square root
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
 * _sqrt_recursion - sign of n before exec
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
