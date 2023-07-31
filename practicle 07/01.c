#include<stdio.h>
int main()
{
    int i,q,ar1[3][3],ar2[3][3],sum[3][3];
    printf("enter the array 01 sheet\n\n\n ");
    
    for(i=0;i<=2;i++)
    {
        for(q=0;q<=2;q++)
        {
            printf("row =[%d] and colum =[%d]",i,q);
            scanf("%d",&ar1[i][q]);


        }
    }

    printf("enter the secound array 02 sheet\n\n");

 for(i=0;i<=2;i++)
    {
        for(q=0;q<=2;q++)
        {
            printf("row =[%d] and colum =[%d]",i,q);
            scanf("%d",&ar2[i][q]);


        }
    }




printf("\n\nsum calculating in here \n\n\n\n");

for(i=0;i<=2;i++)
{
    for(q=0;q<=2;q++)
    {
        sum[i][q]=ar1[i][q]+ar2[i][q];

    }
}
printf("sum of the arrays : -\n\n");
for(i=0;i<=2;i++)
{
    for(q=0;q<=2;q++)
    {
        printf("sum[%d][%d]=%d      ",i,q,sum[i][q]);

    }
    printf("\n");
}










}