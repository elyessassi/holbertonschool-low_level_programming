#include "main.h"

/**
 * 
 */

void print_alphabet_x10(void)
{
    int x = 0;
    int y = 0;
    while (y != 10)
    {
        y++;
	    for (x = 'a' ; x <= 'z' ; x++)
	    {
		    _putchar(x);
	    }
    _putchar('\n');
    }
}
