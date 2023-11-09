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
 * *str_concat - the main fonction
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or the new string
 */

char *str_concat(char *s1, char *s2)
{
	int ls1 = _strlen(s1) == NULL ? ls1 = 0;
	int ls2 = _strlen(s2) == NULL ? ls2 = 0;
	char *nstring;
	int i;

	if (s1 == NULL)
	{
		return (s2);
	}
	if (s2 == NULL)
	{
		return (s1);
	}
	nstring = malloc(ls1 + ls2 + 1);
	if (nstring == NULL)
		return (NULL);
	for (i = 0; i < ls1; i++)
	{
		nstring[i] = s1[i];
	}
	for (i = 0; i < ls2; i++)
	{
		nstring[i + ls1] = s2[i];
	}
	return (nstring);
}
