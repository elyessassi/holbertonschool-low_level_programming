#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to be coppied
 * Return: Pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int num = n, i;

	for (i = 0; i < num; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
