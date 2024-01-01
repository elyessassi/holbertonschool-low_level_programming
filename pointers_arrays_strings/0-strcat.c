#include "main.h"

/**
 * _strcat - copies a string to an other string
 * @dest: destination
 * @src: source
 * Return: destination
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0 ; src[j] != '\0' ; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
