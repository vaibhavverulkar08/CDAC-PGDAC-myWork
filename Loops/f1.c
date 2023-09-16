
//withiout parameter without arguments
#include<stdio.h>
 void add(); // Declaration 
void main(){
add(); //Calling a function

}
void add() // function Definition
{
    int a=20, b=30;
    printf("Addition=%d",a+b);
}