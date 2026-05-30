#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3); 
    if (num1 == num2 && num1 == num3)
        printf("All number are same");  
    else if(num2 >= num3 && num2 >= num1)
        printf("%d is bigger",num2);
    else if(num1 >= num2 && num1 >= num3)
        printf("%d is bigger",num1);  
    else
        printf("%d is bigger",num3);
    return 0;
}