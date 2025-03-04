#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * string_toupper - a function that converts all caracters of a string to uppercase
 * @s: string
 * Return: converted string
 */

char *string_toupper(char *s)
{
	int i;
	int size = strlen(s);

	for (i = 0; i < size; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}