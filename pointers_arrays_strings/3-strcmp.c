#include <stdio.h>
#include "main.h"

/**
 * _strcmp - function that compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: the difference between non identical caracters or 0 if identical
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
