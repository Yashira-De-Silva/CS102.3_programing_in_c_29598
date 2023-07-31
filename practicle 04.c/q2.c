#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
  
    switch (x%2)
    {
    case 0:
    printf("even number");
        break;
    case 1:
    printf("odd number");
    break;

    
    default:
        break;
    }

}