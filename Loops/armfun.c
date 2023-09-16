#include <stdio.h>
int num, r,c, sum = 0, temp;
int arm_num();
int main()
{
}

   int arm_num(){
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