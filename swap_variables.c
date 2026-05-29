#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
   /* 
    temp = a;       //with third variable
    a = b;
    b = temp;
    */
   /*
    a = a ^ b;      //without third varible using xor
    b = a ^ b;
    a = a ^ b;
    */
    a = a + b;      //without third variable 
    b = a - b;
    a = a - b; 

    printf("After swapping a=%d, b=%d",a,b);
    return 0;
}