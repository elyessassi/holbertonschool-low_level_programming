#include "main.h"
#include <stdio.h>

/**
 * 
*/

void times_table(void)
{
    int x;
    int y;


    for (x = 0; x <= 9 ; x++)
    {
        for (y = 0 ; y <= 9 ; y++)
        {
            if (y*x < 10)
            {
                printf("%d",x*y);
                if (y < 9)
                {
                    printf(",");
                    printf(" ");
                    printf(" ");
                }
            }
            else
            {
                printf("%d",x*y);
                if (y < 9)
                {
                    printf(",");
                    printf(" ");
                }
            }
        }
    printf("\n");
    }
}
