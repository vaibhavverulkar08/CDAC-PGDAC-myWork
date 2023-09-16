// Loops :
// 7. WAP to find the entered number is Armstrong or no
#include <stdio.h>
int main()
{
    int num, r,c, sum = 0, temp;
    printf("Enter the number:");
    scanf("%d",&num);
    temp = num;
    while (num > 0)
    {
        r = num % 10; 
        c=r*r*r;
        sum = sum + c;
        num = num / 10;
    }
    if (temp == sum)
        printf("Number entered is an armstrong  number");
    else
        printf("Number Entered is not armstrong number");
}
// 123= (1*1*1)+(2*2*2)+(3*3*3)= 27+8+1= 36
//371= (3*3*3)+(7*7*7)+(1*1*1)=371