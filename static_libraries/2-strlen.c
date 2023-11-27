#include "main.h"

/**
 * _strlen - length of a string
 * @s: string pointer
 * Return: length of the string
*/

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
