// WAP - without retutn with arguments or parameter
#include <stdio.h>
void add(int, int); // Declaration
 main()
{
    int a,b;
    printf("Enter numbaer");
    scanf("%d%d",&a,&b);
    add(a, b); // Calling a function
    
}

void add(int x, int y) // function Definition
{
    printf("Addition=%d", x+ y);
}
