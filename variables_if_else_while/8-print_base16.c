#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int x = 0;

	for (; x <= 9 ; x++)
		putchar(48 + x);
	for (x = 'a' ; x <= 'f' ; x++)
		putchar(x);
	putchar('\n');
	return (0);

}
