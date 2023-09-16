/* Q4.3-Pattern: WAP tO print the following Pattern:

A B C D E 
A       E 
A       E 
A       E 
A B C D E 

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
            for (j = 65; j<70; j++)
            {
                printf("%c ",j);
            }
        }
        else
        {
            printf("A ");
            for (int m = 0; m<6; m++)
            {
                printf(" ");
            }
            printf("E ");
        }
        printf("\n");
    }

    return 0;
}