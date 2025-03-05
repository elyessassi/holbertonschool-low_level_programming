#include <stdio.h>
#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: string to search in
 * @needle: string to search for
 * Return: pointer to where the needle string starts in the haystack string
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (is_identical(haystack, needle) == 1)
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}

/**
 * is_identical - checks if the first string starts with the second string
 * @haystack: first string
 * @needle: second string
 * Return: 1 if exists 0 if not
 */

int is_identical(char *haystack, char *needle)
{
	while (*needle != '\0')
	{
		if (*needle != *haystack)
		{
			return (0);
		}
		haystack++;
		needle++;
	}
	return (1);
}
