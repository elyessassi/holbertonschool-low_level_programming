#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int x = 48;

	for (; x <= 57 ; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
