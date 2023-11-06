#include <stdlib.h>
#include "main.h"

/**
 * 
*/

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}

char *_strdup(char *str)
{
    int x = _strlen(str);
    char *string;
    int i;

    string = malloc(x);
    if (string == NULL)
        return (NULL);
    else
    {
        for (i = 0 ; i < x ; i++)
        {
            string[i] = str[i];
        }
        return (string);
    }

    
}

