#include<stdio.h>
int main()
{
    int radius;
    printf("Enter the reduse =");
    scanf("%d",&radius);
    printf("\tselect on of this \n\n\n01.circumference\n02.area\n03.volum\n");
    int e;
    printf("enter =");
    scanf("%d",&e);
    switch (e)
    {
    case 1:
    printf("answer=%f",2*3.14*radius); break;
    case 2:
    printf("answe =%f",3.14*radius*radius);break;
    case 3:
    printf("answe =%f",1.33*3.14*radius*radius*radius);break;



    
    default:
        break;
    }
}