#include "main.h"
#include "string.h"

/**
 * _strncpy - copies a string to an other string
 * @dest: destination
 * @src: source
 * @n: number of letters
 * Return: dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, src_size;

	src_size = strlen(src);
	for (i = 0 ; i < n ; i++)
	{
		if (i >= src_size)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}

	return (dest);
}
