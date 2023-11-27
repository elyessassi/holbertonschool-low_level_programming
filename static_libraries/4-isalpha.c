#include "main.h"

/**
*_isalpha - detect alpha letters
*@c: character to test
*Return: 1 the character is alpha 0 if not
*/

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}
