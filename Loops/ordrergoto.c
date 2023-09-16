#include <stdio.h>
int main()
{
    int item;
    START:
    printf("\n Hello, Welcome to Icecreme shop\nPlease choose an icecreame item to order :\n");
    printf("\n1.Vanilla\n\2.Mango\n3.Coffee\n");

    scanf("%d", &item);
    switch (item)
    {
    case 1:
        printf("Item Name: Vanilla Icecreame");
        //
        printf("Item Description\t:  \n");
        break;
    case 2:
        printf("Item Name: Mango Icecreame");
        //printf("Item Description\t: \n");
        break;
    case 3:
        printf("Item Name: Coffee Icecreame");
        //printf("Item Description\t: \n");
        break;
    
    default:
        printf("Invalid Item");
    }

    printf("Enter 0 to end order & Enter 1 to Repeat the order"); 
    scanf("%d",&item);
    if (item!=0)
    goto START;
    return 0;
}

