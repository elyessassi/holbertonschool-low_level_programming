#include "main.h"
#include <stdio.h>

/**
 *
*/

void print_to_98(int n)
{
    printf("%d",n );
    while (n != 98)
    {
        
        if (n < 98)
        {
            n++;
            printf(", %d",n );
            
        }
        if (n > 98)
        {
            n--;
            printf(", %d",n );
            
        }

    } 
    printf("\n");
}
