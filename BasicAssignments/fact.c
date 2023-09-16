#include <stdio.h>

int main()

{
int n,f,i;
printf("\n Enter The Number:");
scanf("%d",&n);
f=i=1;
while (i<n)
{
    i++;
    f=f*i;
}
 printf("Factorial of  %d number is:%d\n",n, f);
    return 0;
}
