/* Q4.2-Pattern: WAP tO print the following Pattern:

1 2 3 4 5 
1       5 
1       5 
1       5 
1 2 3 4 5 

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
            for (j = 1; j<6; j++)
            {
                printf("%d ",j);
            }
        }
        else
        {
            printf("1 ");
            for (int m = 0; m<6; m++)
            {
                printf(" ");
            }
            printf("5 ");
        }
        printf("\n");
    }

    return 0;
}