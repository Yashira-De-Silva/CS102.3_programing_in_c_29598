#include<stdio.h>
int main()
{
    int basicsala1,gross;
    char city;
    printf("ENTER YOUR BASIC SALARY = ");
    scanf("%d",&basicsala1);
    printf("ENTER YOUR AREA AS A CHRACTER =");
    scanf(" %c",&city);
    if(city == 'c')
    {
        printf("Your city is colombo so additional allowance  is Rs.2500.00 ");
        basicsala1 =basicsala1+ 2500;
    }else 
    {
       printf("YOU ARE NOT GET ADDITIONAL ALLOWANCE");

    }
    float bonusp;
    if (basicsala1>0 && basicsala1<= 25000)
    {
      bonusp=10/100;
    }else if(basicsala1>=25000 && basicsala1<=50000)
    {
        bonusp=12.0/100.0;

    }else if(basicsala1>=50000)
    {
        bonusp=15.0/100.0;

    }
    gross=basicsala1+(bonusp * basicsala1);
    printf("\nYOUR GROSS SALARY IS = %.2f",(float)gross); 
}