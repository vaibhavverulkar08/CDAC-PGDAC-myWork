// Single Dimension Array

int main()
{

    int mark[2]; // array declaration
    int i, sum = 0;
    double avg;
    printf("Enter Array element");

    for (i = 0; i < 2; i++)
    {
        scanf("%d", &mark[i]); // scan array element
    }
    for (i = 0; i < 2; i++)
    {
        sum = sum + mark[i];   // summing array elements
       // avg = (double)sum / 6; // calculate the average
    }
    for (i = 0; i < 2; i++)
    {
    printf("%d", mark[i]);  // Print the array element
    printf("\nsum is:%d", sum); // print the average
    }
    return 0;
}