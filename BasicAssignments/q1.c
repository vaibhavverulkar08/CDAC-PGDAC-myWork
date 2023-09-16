/*
1. WAP to calculate sum of two variables.
2. WAP to calculate sum of two variable whose value is p=2.5 and q=3.6.
3. WAP to calculate simple interest. (si=p*n*r)/100.
4. WAP to calculate area of rectangle. (a_rec=l*b).
5. WAP to calculate area of circle (a cir=pi*r*r).
6. WAP to calculate multiplication of three numbers
*/

// Q1. WAP to calculate sum of two variables.
// sloution
#include <stdio.h>
int main()
{
    // Write your question no.1 solution here //write a code:
    int var1, var2, sum;
    printf("Enter two variable values: var1: & var2:\n");
    scanf("%d\n%d", &var1, &var2);
    // var1=20;
    // var2=30;
    sum = var1 + var2; // 50
    printf("Sum of two variable is:%d", sum);
}

/* Output:
Enter two variable values: var1: & var2:
20
30
Sum of two variable is:50
*/