#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 * string_nconcat - the main fonction
 * @s1: string 1
 * @s2: string 2
 * @n: int
 * Return: NULL or the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int ls1 = strlen(s1);
	int ls2 = strlen(s2);
	char *nstring;
	int i;
	int x = n;

	if (x >= ls2)
	{
		x = ls2;
		nstring = malloc(ls1 + ls2 + 3);
	}
	else
	{
		nstring = malloc(ls1 + x + 3);
	}
		if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	nstring = malloc(ls1 + ls2 + 3);
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
