#include "main.h"

/**
 * _strncat - copies n letters of src to dest
 * @dest: destination
 * @src: source
 * @n: numbre of letters
 * Return: string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j != n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
