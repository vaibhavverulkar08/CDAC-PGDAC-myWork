// Basic Assignments- 4. WAP to calculate area of rectangle. (a_rec=l*b).
#include <stdio.h>
int main()
{

    int area,area2, l, b;
    l = 40;
    b = 20;
    area = l * b;
    printf("\n Area of Rectangular is:%d", area);

    printf("\n Enter the length & width");
    scanf("%d%d",&l,&b);
    area2=l*b;
    printf("/n Area of rectagular of entered value is:%dx%d=%d",l,b,area2);

    return 0;
}