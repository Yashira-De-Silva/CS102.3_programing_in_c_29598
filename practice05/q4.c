#include<stdio.h>

int main() {


int number,sum=0,digits;

printf("Enter the number = ");
scanf("%d",&number);

while(number!=0)
{
    digits=number%10;
    sum+=digits;
    number/=10;

}
printf("sum of digitd =%d ",sum);








}