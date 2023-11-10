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
	int i;
	int ls1 = strlen(s1);
	int ls2 = strlen(s2);
	char *array;
	int x = n;

	if (s1 == NULL)
	{
		s1 = "";
		ls1 = 0;
	}
	if (s2 == NULL)
	{
		s2 = "";
		ls2 = 0;
	}
	if (x >= ls2)
	{
		x = ls2;
	}
	array = malloc(sizeof(char) * (ls1 + x + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < ls1 ; i++)
	{
		array[i] = s1[i];
	}
	for (i = 0 ; i < x ; i++)
	{
		array[i + ls1] = s2[i];
	}
	return (array);
}
