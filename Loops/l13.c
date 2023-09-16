#include <stdio.h>
int main()
{
    /*

          1 1
        2 1 1 2
      3 2 1 1 2 3
    4 3 2 1 1 2 3 4

    */
    int r, c, s;
    for (r= 1; r<=4; r++)
    {
        for (c = 1; c<=r-1; c++)
        {
            printf(" ");
        }
        for (c = r; c >= 1; c--)
        {
            printf("%d",c);
        }
        for (c = 1; c <= r; c++)
        {
            printf("%d", c);
        }
        printf("\n");
    }
    return 0;
}