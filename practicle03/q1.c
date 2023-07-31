#include<stdio.h>
int main()
{ 
    // Question 01 //ok
    int x,y;
    printf("ENTER TWO NUMBERS WITH THE SPACES = ");
    scanf(" %d %d",&x,&y);
    if(x>y)
    {
        printf("\n\nhighest number is = %d",x);
    }else
    {
        printf("\n\nhighest number is = %d",y);

    }
}