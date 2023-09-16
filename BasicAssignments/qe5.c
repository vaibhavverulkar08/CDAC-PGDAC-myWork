// Q5

// sloution
#include <stdio.h>
int main()
{
    int m1 = 55, m2 = 60, m3 = 55, m4 = 60, m5 = 70;
    float per;

    per = (m1 + m2 + m3 + m4 + m5) / 5;
    printf("percentage is: %.2f", per);

    // Write your question Q4 sloution here//write code:
    printf("\n Grade is:");
    if (per > 80)
        printf("A+");
    if (per >= 65 && per <= 80)
        printf("A");
    if (per >= 50 && per <= 65)
        printf("B");
    if (per >= 40 && per <= 50)
        printf("c");
    if (per <= 40)
        printf("fail");

    return 0;
}

/* Output:

*/