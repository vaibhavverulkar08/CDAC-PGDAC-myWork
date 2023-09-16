#include<stdio.h>
 
int check_prime(int);
 
int main()
{
   int n, result;
 
   printf("Enter an integer to check whether it is prime or not.\n");
   scanf("%d",&n);

   if(n==1)
   {
    printf(" 1 is not a prime number");
   }
 else
 {
   {result = check_prime(n);
 
   if ( result == 1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);}
 
   return 0;
}
}
int check_prime(int a)
{
   int c;
   for ( c = 2 ; c <= a - 1 ; c++ )
   { 
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}
 