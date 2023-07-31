#include<stdio.h>
int main()
{
    int empno;
    float hrwork;
    float overrat=150;
    float overrrrr=200;
    int count=0;
    int countexceed=0;
   

    printf("enter the emp no = ");
    scanf("%d",&empno);

    while (empno!=-999)
    {
        printf("eneter the hours worked = ");
        scanf("%d",&hrwork);
         float overtime=0;

         if(hrwork>40)
         {
            float exceesshr=hrwork-40;
            overtime=(40*overrat)+(overrrrr*exceesshr);
         }else
         {
            overtime=hrwork*overrat;

         }

          printf("enter the emp no = ");
          scanf("%d",&empno);
          if(overtime>4000)
          {
            countexceed++;
          }

          count++;
          printf("Enter the Employee No (-999 to exit): ");
        scanf("%d", &empno);


    }
float percentageExceeding4000 = (countexceed/ count) * 100;

    printf("\nPercentage of Employees with Overtime Payment exceeding Rs. 4000: %.2f%%\n", percentageExceeding4000);

           
    
}
    


