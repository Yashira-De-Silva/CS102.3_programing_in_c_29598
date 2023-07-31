#include<stdio.h>
int main()
{
int number,positive=0,negative=0,zero=0;

printf("enter 10 numbers = \n");
 for(int i=0;i<10;i++)
 {
scanf("%d",&number);
if(number>0)
{
    positive++;

}
else if(number<0)
{
    negative++;

}else
{
    zero++;
}

 }

 printf("positive = %d\n",positive);
printf("negative = %d \n",negative);
printf("zero =%d\n",zero);







}