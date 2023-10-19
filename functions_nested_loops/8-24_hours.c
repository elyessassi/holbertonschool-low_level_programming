#include "main"

/**
 * 
 * 
*/

void jack_bauer(void)
{
    int h;
    int m;

    for (h = 0 ; h <= 23 ; h++)
    {
        for (m = 0 ; m <= 59 ; m++)
			_putchar(h + 48);
			_putchar(":");
			_putchar(m + 48);
    }
}
