#include<stdio.h>
int main(){


int num[10],sum=0;
int i;
float avg;
int max,min;
printf("enter 10 marks =\n ");
for(i=0;i<10;i++)
{
    scanf("%d",&num[i]);
    sum+=num[i];


    if(i==0)

    {
     max=min=num[i];
    }else if (num[i]>max)

    {
        max=num[i];

    }else if(num[i]<min)
    {
        min=num[i];
    }


}
avg=sum/10;
 printf("Maximum marks: %d\n", max);
    printf("Minimum marks: %d\n", min);
    printf("Average marks: %.2lf\n", avg);


}

