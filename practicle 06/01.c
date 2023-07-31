#include<stdio.h>
int main()
{

int ar[10];
int temp=0,higher,mini,sum=0;
int aveg;
printf("numbers entering \n\n");
for(int i=0;i<=9;i++)
{
printf("enter the number = ");
scanf("%d",&ar[i]);
if(temp<ar[i])
{
    higher=ar[i];
    temp=ar[i];
}

if(temp>ar[i])
{
    mini=ar[i];
    temp=ar[i];
}
temp=ar[i];
sum=sum+ar[i];




}

aveg=sum/10;
printf("mini is = %d \n",mini);
printf("max is =%d \n",higher);
printf("sum is = %d\n ",sum);
printf("average is = %d ",aveg);

}