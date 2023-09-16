
/* Day 1 (Level up Question)
 Q4. Write a C program to check if it is a palindrome number
or not using a recursive method
*/
#include <stdio.h>
int main()
{

    int n, r, sum=0,temp;
    int org = n;
    n = 121;
    temp=n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;

    }
        if (temp == sum)
        {
            printf("\n Ok");
        }
        else
        {
            printf("\n Not ok");
        }
    
    return 0;
}
