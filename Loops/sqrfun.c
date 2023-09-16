#include<stdio.h>  
int square();  //declaration
void main()  
{  
    printf("Going to calculate the area of the square\n");  
    int area = square();  //calling function
    printf("The area of the square: %d\n",area);  
}  
int square()  //function Definition
{  
    int side;  
    printf("Enter the length of the side in meters: ");  
    scanf("%d",&side);  
    return side * side;  
}  