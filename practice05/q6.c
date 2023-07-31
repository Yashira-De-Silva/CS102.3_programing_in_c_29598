

#include<stdio.h>
int main()
{

int base,exponent,z,result=1;
printf("enter the base =");
scanf("%d",&base);

printf("Enter the exponent: ");
scanf("%d", &exponent);
z=0;
while(z<exponent)

{
result*=base;
z++;
}
printf("n th power of intiger =%d",result);
    
}