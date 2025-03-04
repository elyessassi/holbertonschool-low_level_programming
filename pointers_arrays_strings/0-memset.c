#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to memory area
 * @b: value to fill with
 * @n: number of bytes to fill
 * Return: pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
    int i;
    int x = n;

    for (i = 0 ; i < x ; i++)
    {
        s[i] = b;
    }
   return (s);
}
