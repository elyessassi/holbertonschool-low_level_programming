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

	for (x = 0 ; src[x] != '\0' ; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
