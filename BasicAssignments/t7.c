//Day 1 (Level up Question)
// Q7.A number is entered through the keyboard.the number
// may contain 1,2,3,4 or 5 digits.Write a program to find a
// number of digits in the number.
#include <stdio.h>
int main()
{
    int num, count=0;
    printf("Enter the number");
    scanf("%d", &num); // 231

    while (num>0) // true
    {
        num = num / 10; // 23, 2, 0
        count++;        // 0+1=> 1,2, 3
    }
    printf("number of digit is:%d", count);

    return 0;
}