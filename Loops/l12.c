//12.WAP to print the following pattern

/*

 *  
 * *  
 * * * 
 * * * * 
 * * * * *

*/
#include <stdio.h>
int main()
{
    int r , c;
    for (r=1;r<=5;++r)
    {
     //body
     for (c=1;c<=r;++c)
     {
        printf("*");
     }
      printf("\n");
    } 
   
    return 0;
}
