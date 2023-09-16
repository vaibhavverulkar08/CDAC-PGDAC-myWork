#include <stdio.h>
int main()
{

int a,b,c,d;
a=8,b=4;
goto jump;
c=a+b;
c=a-b;
printf("Before Jump%d",c);
jump:
d=a/b;
printf("Jumping to division: %d",d);

}