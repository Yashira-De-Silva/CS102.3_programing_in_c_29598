#include<stdio.h>
int main()
{
     /*03.   input values int,float,double etc*/

     int intigernum;
     float floatnum;
     double doublenum;
     char character1;

     printf("ENTER THE INTIGER NUMBER =");
     scanf("%d",&intigernum);
     printf("ENTER THE FLOAT NUMBER =");
     scanf("%f",&floatnum);
     printf("ENTER THE DOUBLE NUMBER =");
     scanf("%lf",&doublenum);
     printf("ENNTER THE CHARACTER =");
     scanf(" %c",&character1);
     
     // PRINTING ALL RESULTS THAT INPUTS
     printf("\n\nINTIGER NUMBER IS =%d",intigernum);
     printf("\nFLOAT NUMBER IS = %.2f",floatnum);
     printf("\n%lf",doublenum);
     printf("\nCHARACTER IS = %c\n\n\n",character1);

}