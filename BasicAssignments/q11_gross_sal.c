#include <stdio.h>
/*
Q11. Ramesh’s basic salary is input through the keyboard his DA is 40% of the basic salary
and H.R.A is 25%, P.F=20% and TA is 30% of the basic salary.WAP to calculate the gross
salary and net salary.
*/
int main(void)
{
    // Write your question no.11 solution here //write a code:
    // Input data
    int Basic, DA, HRA, TA, PF, Gross, Net;
    printf("Enter basic salary : ");
    scanf("%d", &Basic);
    HRA = (Basic * 25) / 100;
    DA = (Basic * 40) / 100;
    TA = (Basic * 30) / 100;
    PF = (Basic * 20) / 100;
    Gross = Basic + HRA + TA + DA;
    Net = Gross - PF;
    printf("\nGross salary is: %d", Gross);
    printf("\nNet salary is: %d", Net);
}

/* Output:

*/