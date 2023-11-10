#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 * str_concat - the main fonction
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or the new string
 */

char *str_concat(char *s1, char *s2);
{
	int i;
	int ls1 = strlen(s1);
	int ls2 = strlen(s2);
	char *array;

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
	array = malloc(sizeof(char) * (ls1 + ls2 +1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < ls1 ; i++)
	{
		array[i] = s1[i];
	}
	for (i = 0 ; i < ls2 ; i++)
	{
		array[i + ls1] = s2[i];
	}
	return (array);
}
