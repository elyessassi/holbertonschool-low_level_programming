#include "main.h"
#include <string.h>

/**
 *_strcpy - fonction that that copies the string pointed to by src
 * @dest: destination
 * @src: initialisation
 * Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int x;
	int len;

	len = strlen(src);
	for (x = 0 ; x < len ; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
