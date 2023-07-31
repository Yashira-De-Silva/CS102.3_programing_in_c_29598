#include<stdio.h>
int main()
{
    int i,countgr=0;
    float price[10],total,avg;
    for(i=0;i<10;i++)
    {
        printf("enter the price of iterm = ");
        scanf(" %f",&price[i]);
        total+=price[i];
        if(price[i]>200){
              countgr++;
        }


    }

    avg=total/10;
    printf("\nAverage value of an item: %.2f\n", avg);
    printf("Number of items with price greater than 200: %d\n", countgr);


}