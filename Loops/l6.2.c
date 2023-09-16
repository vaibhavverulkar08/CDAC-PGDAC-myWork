// 6. WAP to print the sum of individual five digit number.
// using do while
#include <stdio.h>
int main()
{

    // using while loop:
    int n, i, sum;
    printf("\n Enter three digit no:");
    scanf("%d", &n);

    while (n) ;
    {
        i = n % 10;
        sum = sum + i;
        n = n / 10;
    }
    printf("\n sum of individual no is:%d", sum);

    return 0;
}
