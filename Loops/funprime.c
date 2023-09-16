#include <stdio.h>
int isPrime(int num); // function declaration
int main()
{
    int number;
    printf("Enter any number:");
    scanf("%d", &number);
     isPrime(number); // calling a function
    return 0;
}

int isPrime(int num)
{
    int c = 0, i;
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            c++;
        }
    }
    if (c == 1)
    {
        printf("The enter number i.e. %d is prime",num);
    }
    else
    {
        printf("The enter number i.e %d is not prime",num);
    }
    return 0;
}
