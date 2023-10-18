#include "main.h"

/**
 * _islower - check if the character is uppercase or lowercase
 * Return: 0 lowercase 1 uppercase
*/

int _islower(int c)
{
	if ((65 <= c) && (c <= 90))
		return (0);
	else if ((97 <= c) && (c <= 122))
		return (1);
	return (0);
} 
