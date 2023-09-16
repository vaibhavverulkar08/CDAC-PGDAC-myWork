//Day1- Level up Question:
#include <stdio.h>
int main()
{
//Day1 Task - 1.Calculate the Factorial of a Number
int n,fact;
printf("Enter any number");
scanf("%d",&n);
fact=1;
for (int i=1;i<=n;i++){
fact=i*fact;
//("\n Factorial of given %d*%d number is:",fact,i,fact);
// for (int i=4;i>=1;i--){
// fact=fact*i;
//printf("\n Factorial of given %d*%d number is:%d",fact,i,fact);
}
printf("\n Factorial of given %d number is:%d",n,fact);
return 0;

}
