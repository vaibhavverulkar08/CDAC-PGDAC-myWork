// WAP - with return without parameter

#include <stdio.h>
int add(void); // Declaration
void main()
{
    int ans;
    ans=add();
    printf("%d",ans);
    
}

int add(void) // function Definition
{
int a,b,c;
a=4;b=5;
c=a+b;
return c;
}