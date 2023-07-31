#include<stdio.h>
int main()
{
    int i,sum=0;
    while(1)
    {
        printf("enter the umber=");
        scanf(" %d",&i);
        if(i==-1)
        break;
        sum=sum+i;
    }
printf("sum is = %d",sum);
}