#include "main.h"

/**
 * _pow_recursion - fonction to print power
 * @x: int
 * @y: int
 * Return: -1 if y < 0 or 1 if y == 0 or power of x by y if y > 0
*/

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y < 0)
		return (-1);
	else
		return (1);
}
