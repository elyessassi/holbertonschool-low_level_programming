#include "main.h"

/**
 * factorial - prints factorial of a number
 * @n: int
 * Return: factorial of a number or -1 if the numbre is negative
*/

int factorial(int n)
{
	if (n > 0)
		return (n * (factorial(n - 1)));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
