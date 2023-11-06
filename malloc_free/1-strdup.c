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
	int x = _strlen(str);
	char *string;
	int i;

	if (x == 0)
		return (" ");
	string = malloc(x + 1);
	if (string != NULL)
	{
		for (i = 0 ; i < x ; i++)
		{
			string[i] = str[i];
		}
		return (string);
	}
	else
		return (NULL);
}
