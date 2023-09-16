/* Q.4.1 Pattern:  WAP tO print the following Pattern:

* * * * * 
*       *
*       *
*       *
* * * * *

*/
// Solution
#include <stdio.h>
int main()
{

    int i, j;
    for (i = 0; i<5; i++)
    {
        if (i == 0 || i == 4)
        {
            for (j = 0; j<5; j++)
            {
                printf("* ");
            }
        }
        else
        {
            printf("* ");
            for (int m = 0; m<6; m++)
            {
                printf(" ");
            }
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}