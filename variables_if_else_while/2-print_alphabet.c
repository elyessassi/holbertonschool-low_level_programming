#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
		if (x == 'z')
			putchar("/n");
	}
	return (0);
}	

