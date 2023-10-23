#include "main.h"

/**
 *_isupper - check for uppercase caracters
 *@c: int to test
 *Return: 0 if lowercase 1 if upper case
*/

int _isupper(int c)
{
	if ((c > 90) || (c < 65))
		return (0);
	else
		return (1);

}
