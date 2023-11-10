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
 * string_nconcat - the main fonction
 * @s1: string 1
 * @s2: string 2
 * @n: int
 * Return: NULL or the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int ls1 = _strlen(s1);
	int ls2 = _strlen(s2);
	char *nstring;
	int i;
	int x = n;

	if (x >= ls2)
	{
		x = ls2;
	}
	nstring = malloc(ls1 + ls2 + 1);
	if (nstring == NULL)
		return (NULL);
	for (i = 0; i < ls1; i++)
	{
		nstring[i] = s1[i];
	}
	for (i = 0; i < x; i++)
	{
		nstring[i + ls1] = s2[i];
	}
	return (nstring);
}
