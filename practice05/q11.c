#include<stdio.h>
int main()
{
    int no,i,c=0;
    printf("enter the number =");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {
        if (no % i==0)
        {
            c++;
        }
        
    }
    
    if(c==2)
    printf("%d prime number",no);
    else
    printf("%d is not prime number ",no);

}