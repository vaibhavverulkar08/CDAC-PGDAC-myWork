// 6.3 WAP to print the sum of individual five digit number.
// using For loop
#include <stdio.h>
int main()
{

    int n, i, sum;
    printf("\n Enter five digit no:");
    scanf("%d",&n);

    for (; n != 0;)
    {
        i = n % 10;
        sum = sum + i;
        n = n / 10;
    }
    printf("\n sum of individual no is:%d", sum);
    return 0;
}
