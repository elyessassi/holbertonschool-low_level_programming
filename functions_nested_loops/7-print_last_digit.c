#include "main.h"

/**
 * 
*/

int print_last_digit(int x)
{
    int s = x%10;

	if (s < 0)
	{
    	_putchar(-s + 48);
    	return(-s);
	}
	else
	{
		_putchar(s + 48);
    	return(s)
	}
}

