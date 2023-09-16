#include <stdio.h>
int main()
{

    int a[2][2], i, j;
    printf("\n Enter element matrix");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n 2D Matrix is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        printf("\t%d", a[i][j]);
        printf("\t\n");
    }

    return 0;
}
