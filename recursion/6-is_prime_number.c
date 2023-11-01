#include "main.h"

/**
 * testprime - test if prime
 * @n: int
 * @i: int
 * Return: 1 if n is prime or 0 if not
*/
int testprime(int n, int i)
{
	if (i == 1)
		return (1);
	else if ((n % i) == 0)
		return (0);
	return (testprime(n, (i - 1)));
}

/**
 * is_prime_number - runs if n > 1
 * @n: int
 * Return: testprime fonc or 0
*/


int is_prime_number(int n)
{
	if (n > 1)
		return (testprime(n, n - 1));
	else
		return (0);
}
