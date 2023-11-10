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
	unsigned int ls1;
	unsigned int ls2;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ls1 = strlen(s1);
	ls2 = strlen(s2);
	if (n >= ls2)
	{
		n = ls2;
	}
	array = malloc(sizeof(char) * (ls1 + n + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ls1; i++)
	{
		array[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		array[i + ls1] = s2[i];
	}
	return (array);
}
