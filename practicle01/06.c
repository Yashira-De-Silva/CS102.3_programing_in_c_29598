#include<stdio.h>
int main()
{
 /*06.      Input a student name, 
               birth year and display student name with age.*/

    printf("\n\n\n\n");
    char na[100];
    int age,year;
    printf("ENTER THE STUDENT name =");
    scanf("%s",na);
    printf("\nENTER THE STUDENT BIRTH YEAR=");
    scanf("%d",&year);
    age=2023-year;
    printf("STUDENT NAME IS = %s", na);
    printf("\nYOUR AGE IS =%d",age);
    
}