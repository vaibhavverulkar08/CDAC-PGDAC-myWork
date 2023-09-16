/*
1. WAP to calculate sum of two variables.
2. WAP to calculate sum of two variable whose value is p=2.5 and q=3.6.
3. WAP to calculate simple interest. (si=p*n*r)/100.
4. WAP to calculate area of rectangle. (a_rec=l*b).
5. WAP to calculate area of circle (a cir=pi*r*r).
6. WAP to calculate multiplication of three numbers
*/

// Q3. WAP to calculate simple interest. (si=p*n*r)/100.
// sloution
#include <stdio.h>
int main()
{
    // Write your question no.3 solution here //write a code:
    /*Ex: Calculate the simple interest on a loan amount of Rs. 4016.25 at 9% per annum in 5 years.Find the total amount of money the borrower had to pay.*/
    double si, p, n, r;
    printf("Enter Principal amount:");
    scanf("%lf", &p);
    printf("Enter the rate of interest:");
    scanf("%lf", &r);
    printf("Enter the duration :");
    scanf("%lf", &n);
    si = (p * n * r) / 100;
    printf("The Simple interest calculated as:%.2lf", si);
    return 0;
}

/* Output:
Enter Principal amount:4016.25
Enter the rate of interest:9
Enter the duration :5
The Simple interest calculated as:1807.31*/