// WAP to print the first and last character from "INDIA" string.
#include <stdio.h>
int main(){

// {
//     char rstr[20] = {"INDIA"};
//     int i;
//     for (i = 0; rstr[i] > 5; i++)
//     {
//         if (i == 0 || i == 4)
//             printf("%c", rstr[i]);
//     }
  
// Output:IA

char str[20],len=0, i;
printf("Enter the string :");
scanf("%s",&str);
for(int i=0;str[i]!='\0';i++)
{
    len++;
}
 int l=len;
 for(int i=0;i<l-1;i++)
// if(i==0 || i==(l-1))
 {
 printf("%c%c",str[i],str[l-1]);
 }
  return 0;
}