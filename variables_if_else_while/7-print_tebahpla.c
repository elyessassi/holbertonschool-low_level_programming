#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 'z' ; x >= 'a' ; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
