// Task Name:
// Write aprogram to print invice bill of purchased item from icecreame shop.
// Solution
#include <stdio.h>
int main()
{
    int item;
    // item prize
    int Vanilla = 150, Butterscotch = 160, Mango = 80, Strawberry = 200, Coffee = 120, Chocolate = 200;
    int itemQuantity, total;
    char customeName[20];
    printf("\n************** Menu Card **************\n");
    // Welcoming customer.
    printf("\n\"Welcome to Sweet Freeze!\"\n");
    printf("How May I help you sir or maam?,\n");
    // printf("plese have look on our Ice Cream Menu card:\n");

    // List of Menu for ice creame items
    printf("\n*** List of Menu for Ice Creme Items ***\n");
    printf("\n 1.Vanilla\n\t prize:Rs.150\n 2.Butterscotch\n\t prize:Rs.160\n 3.Mango\n\t prize:Rs.80\n 4.Strawberry\n\t prize:Rs.200\n 5.Coffee\n\t prize:Rs.120\n 6.Chocolate\n\t prize:Rs.200\n");

    // Invoice Bill
    printf("---------------------------------------------");
    printf("\n\t\t -INVOICE BILL- \t\n");
    printf("\t\"Sweet Freeze - The Icecreame Shop\"\t\n");
    printf("\n---------------------------------------------");
    printf("\nInvoice Number:001\t");
    printf("\tDate:12/09/2023\n");
    printf("Customer Name:");
    scanf("%s", &customeName);
    // printf("\n%s",customeName);
    printf("\n---------------------------------------------");
    printf("\nOrder Number\t\t:");
    scanf("%d", &item);
    switch (item)
    {
    case 1:
        printf("Item Description\t:Vanilla \n");
        printf("No.of Quantity\t\t:");
        scanf("%d", &itemQuantity);
        printf("Item unit Prize\t\t:%d", Vanilla);
        total = itemQuantity * Vanilla;
        printf("\nTotal Amount Rs.\t:%d*%d\t=%d", itemQuantity, Vanilla, total);
        break;
    case 2:
        printf("Item Description\t:Butterscotch \n");
        printf("No.of Quantity\t\t:");
        scanf("%d", &itemQuantity);
        printf("Item unit Prize\t\t:%d", Butterscotch);
        total = itemQuantity * Butterscotch;
        printf("\nTotal Amount Rs.\t:%d*%d\t=%d", itemQuantity, Butterscotch, total);
        break;
    case 3:
        printf("Item Description\t:Mango\n");
        printf("No.of Quantity\t\t:");
        scanf("%d", &itemQuantity);
        printf("Item unit Prize\t\t:%d", Mango);
        total = itemQuantity * Mango;
        printf("\nTotal Amount Rs.\t:%d*%d\t=%d", itemQuantity, Mango, total);
        break;

    case 4:
        printf("Item Description\t:Strawberry\n");
        printf("No.of Quantity\t\t:");
        scanf("%d", &itemQuantity);
        printf("Item unit Prize\t\t:%d", Strawberry);
        total = itemQuantity * Strawberry;
        printf("\nTotal Amount Rs.\t:%d*%d\t=%d", itemQuantity, Strawberry, total);
        break;
    case 5:
        printf("Item Description\t:Coffee\n");
        printf("No.of Quantity\t\t:");
        scanf("%d", &itemQuantity);
        printf("Item unit Prize\t\t:%d", Coffee);
        total = itemQuantity * Coffee;
        printf("\nTotal Amount Rs.\t:%d*%d\t=%d", itemQuantity, Coffee, total);
        break;
    case 6:
        printf("Item Description\t:Chocolate\n");
        printf("No.of Quantity\t\t:");
        scanf("%d", &itemQuantity);
        printf("Item unit Prize\t\t:%d", Chocolate);
        total = itemQuantity * Chocolate;
        printf("\nTotal Amount Rs.\t:%d*%d\t=%d", itemQuantity, Chocolate, total);
        break;
    default:
        printf("Not Valid Order number, please check the menu list once again. Thank you");
        break;
    }
    printf("\n---------------------------------------------\n");
    printf("\nThank you for your order , please visit Agian!\n");
    printf("\n---------------------------------------------");
    return 0;
}
