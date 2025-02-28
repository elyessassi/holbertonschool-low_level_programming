#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * leet - function that encodes a string into 1337
 * @s: string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	char array[] = {'a', '4', 'A', '4', 'e', '3', 'E', '3'
					, 'o', '0', 'O', '0', 't', '7', 'T', '7', 'l', '1', 'L', '1'};
	int size = strlen(s), i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (s[i] == array[j])
			{
				s[i] = array[j + 1];
				break;
			}
		}
	}
	return (s);
}
