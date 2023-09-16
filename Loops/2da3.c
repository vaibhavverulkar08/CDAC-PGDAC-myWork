#include <stdio.h>
int main()
{
    int a[3][3], i, j, sum = 0;
    printf("\n Enter element matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elelment are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            if ((i + j == 0) || ((i + j) == 2 && j != 1) || (i + j == 4)){
        printf("%d\n", a[i][j]);    
        sum = sum + a[i][j];
            }
    }
    printf("The Sum of Elements are : %d", sum);
    return 0;
}