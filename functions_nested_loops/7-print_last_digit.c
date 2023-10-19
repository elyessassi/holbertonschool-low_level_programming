#include "main.h"

/**
 *print_last_digit - prints last digit
 *@x: int to test
 *Return: returns last digit
*/

int print_last_digit(int x)
{
	int s = x%10;

	if (s < 0)
	{
		_putchar(-s + 48);
		return (-s);
	}
	else
	{
		_putchar(s + 48);
		return (s);
	}
}
