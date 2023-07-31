#include<stdio.h>
int main()
{
 /*Input two numbers, swap the values and 
            display the output      */

    int temp,num1,num2;
 
    printf("\nEnter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\t\t\tBefore swap: \n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

                // Swapping the values
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\t\t\tAfter swap: \n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    
}