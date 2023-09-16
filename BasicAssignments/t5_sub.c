// 5. Write a C program to Subtract Two Numbers Without Using the Subtraction Operator
#include <stdio.h>
int sub(int a, int b)
{
    /*for loop will start from 1 and move till the value of second number ,
    first number(a) is decrement in for loop*/
    for (int i = 1; i <= b; i++)
        a--;
    return a;
}
int main()
{
    int a = sub(20, 5);
    printf("\n substraction is:%d", a);
    return 0;
    /* first number is 20 and second number is 5 ,
     for loop will start from 1 and move till 5 and the value of a is decrement 5 times
     which will give us the total substraction of two numbers
    */
}