#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: string to search in
 * @accept: set of bytes
 * Return: pointer s that matches accept NULL if no byte found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (exists(*s, accept) == 1)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}

/**
 * exists - function that searches a character in a string
 * @c: character
 * @s: string to search in
 * Return: 1 if found 0 if not
 */

int exists(char c, char *s)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (1);
		}
		s++;
	}
	return (0);
}
