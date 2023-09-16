#include<stdio.h>
int main()
{
    int r, c;

    for (r=65; r <= 69; r++)
    {
        for ( c = 65; c <= r; c++)
        {
            printf(" %c",c);
        }
        printf("\n");
    }   
    
        return 0;
}   

// A(65)
// A(65) B(66)
// A(65) B(66) c(67)
// A(65) B(66) c(67) D(68)
// A(65) B(66) c(67) d(68) E(69)