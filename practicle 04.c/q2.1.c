#include<stdio.h>
int main()
{
    printf("MINI CALCULATOR");
    printf("\n\n\n\n\n");
    printf("enter funtion = ");
    char ca;
    scanf(" %c",&ca);
    int x,y;
    printf("enter two numbers with space= ");
    scanf("%d %d",&x,&y);
    switch (ca)
    {
    case '+':
        
        printf("Answer =%d ",x+y);
        break;
        case '-' :
        printf("answe =%d",x-y);
        break;
        case '/':
        printf("answe =%d",x/y);
        break;
        case '*':
        printf("answe =%d",x*y);
        break;
    
    default:
        break;
    }
}