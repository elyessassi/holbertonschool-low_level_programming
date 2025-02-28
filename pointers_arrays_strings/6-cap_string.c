#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * cap_string - function that capitalizes given string
 * @str: string given
 * Return: string capitalized
 */

char *cap_string(char *str)
{
	int sepetator_pt = 0;
	int i;
	int size = strlen(str);

	if (is_separator(str[0]) == 1)
	{
		str[0] = str[0] - 32;
	}

	for (i = 1; i < size; i++)
	{
		if (is_separator(str[i]) == 1)
		{
			sepetator_pt = 1;
		}
		if (is_separator(str[i]) == 0 && sepetator_pt == 1)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				sepetator_pt = 0;
				str[i] = str[i] - 32;
			}
			else
			{
				sepetator_pt = 0;
			}
		}
	}
	return (str);
}

/**
 * is_separator - function that checks if given string is a separator
 * @x: character to check
 * Return: 1 if separator 0 if not
 */

int is_separator(char x)
{
	char separators[] = {',', ';', '.',
						 '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};
	int i;

	for (i = 0; i < 13; i++)
	{
		if (separators[i] == x)
		{
			return (1);
		}
	}
	return (0);
}
