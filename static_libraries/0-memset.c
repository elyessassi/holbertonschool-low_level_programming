#include "main.h"

/**
 * 
*/

char *_memset(char *s, char b, unsigned int n)
{
    int i;
    int x = n;

    for (i = 0 ; i >= x ; i++)
    {
        s[i] = b;
    }
    return (s);
}