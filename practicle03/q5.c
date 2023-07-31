#include<stdio.h>
int main()
{
     //Question 05
    int num1,num2;
    printf("enter two numbers with space ");
    scanf("%d %d",&num1,&num2);
    printf("%d %d\n",num1,num2);
    
    if (num1%num2==0)
    {
        printf("first number is a multiple of the second number\n");

    }else
    {
        printf("first number is not multiple of the second number\n");
    }
}