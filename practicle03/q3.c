#include<stdio.h>
int main()
{
     // Question 03//ok

    char name[30];
    float basics,newsal,incre,incre1;
    printf("\n Enter the employee name = ");
    scanf("%s",name);
    printf("\n Enter your basic salary = ");
    scanf("%f",&basics);
     if(basics<5000)
     {
         incre=0.05;
     }else if(basics>=5000)
     {
        incre=0.05;
     }else if(basics<=10000)
     {
        incre=0.1;

     }else if(basics>=10000)
     {
        incre=0.15;
     }

     incre1=basics*incre;
     newsal=basics+incre1;
     printf("\nYOUR NEW SALARY IS = %.2f",newsal);
}
