#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_atoi - function that turns string to integer
 *@s: string to turn to integer
 *Return: num if positive num * -1 if negative and 0 if there is no integer
 */

int _atoi(char *s)
{
	int neg = 0;
	long unsigned int num = 0;
	int there_is_a_num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			if (neg == 0)
			{
				neg = 1;
			}
			else
			{
				neg = 0;
			}
		}
		if (*s >= 48 && *s <= 57)
		{
			there_is_a_num = 1;
			num = (num * 10) + (*s - 48);
		}
		if (there_is_a_num == 1 && (*s < 48 || *s > 57))
			break;
		s++;
	}
	if (there_is_a_num == 0)
	{
		return (0);
	}
	else
	{
		if (neg == 1)
			return (num * -1);
		else
			return (num);
	}
}
