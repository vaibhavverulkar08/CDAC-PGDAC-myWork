#include <stdio.h>
int main()
{
    int num, elm = -1;
    int a[5]={1,2,3,4,5};
    printf("Enter number to find the number:");
    scanf("%d",&num);
    for (int i = 0; i < 5; i++){
        if(a[i]==num){
            elm=i;
            break;
        }
    }
     
    if (elm>-1)
    {
    printf("Index of the element:%d",elm);
    }
    else{
        printf("Not present in array");
    }
    return 0;
}