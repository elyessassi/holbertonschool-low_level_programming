#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * 
*/

void rev_string(char *s)
{
    char swap;
    int len;
    int i;
    int j;
     
    
    len = strlen(s);
    for (i= 0, j = (len - 1) ;i <j ; i++, j--)
    {
        
        swap= s[i];
        s[i] = s[j];
        s[j] = swap;

          
        }
    
}
