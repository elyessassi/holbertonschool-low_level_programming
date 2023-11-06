#include <stdlib.h>
#include "main.h"

/**
 * _strlen - fonction to return the number of characters in a string
 * @s: string
 * Return: number of caracters
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

/**
 * *_strdup - the main fonction
 * @str: string
 * Return: NULL or the new string
 */

char *_strdup(char *str)
{
	int x = 0;
	char *string;
	int i;

	if (str == NULL)
		return (NULL);
	x = _strlen(str);
	string = malloc(x * sizeof(char));
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		string[i] = str[i];
	}
	string[x] = '\0';
	return (string);
}
