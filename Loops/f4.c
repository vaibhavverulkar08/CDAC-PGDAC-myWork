// WAP - with return type with parameter or arguments

#include <stdio.h>
int add(int x,int y); 
int c,a=20,b=30;
 main()
{
    c=add(a,b);
    printf("%d",c);
}
int add(int x, int y) 
{
return x+y;
}