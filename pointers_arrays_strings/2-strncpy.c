#include "main.h"

/**
 * _strncpy - copies a number of bytes of a string to an other
 * @dest: destination
 * @src: source
 * @n: number of letters
 * Return: dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i == n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
