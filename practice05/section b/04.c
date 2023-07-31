#include<stdio.h>
int main()
{
    int empno;
    float basc;
    int count=0;

    printf("enter the employee number = \n");
    scanf("%d",&empno);

    while (empno!=-999)
    {
        printf("enter the basic salary = ");
        scanf("%f",&basc);

    
    if(basc>=5000)
    {
        count++;
    }

    printf("enter the employee number = \n");
    scanf("%d",&empno);
    

    }
        printf("\nNumber of Employees with Basic Salary >= 5000: %d\n", count);

}