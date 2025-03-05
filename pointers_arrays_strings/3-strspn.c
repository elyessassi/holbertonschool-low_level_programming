#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to search in
 * @accept: substring
 * Return: number of bytes in the initial segment of s  of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int length = 0;

	while (*s != '\0')
	{
		if (exists(*s, accept) == 0)
		{
			return (length);
		}
		length++;
		s++;
	}
	return (length);
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
