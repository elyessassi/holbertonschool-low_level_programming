#include "main.h"

/**
 *_isdigit - check for digit
 *@c: int to test
 *Return: 0 if not digit 1 if digit
*/

int _isdigit(int c)
{
	if ((c > 57) || (c < 48))
		return (0);
	else
		return (1);

}
