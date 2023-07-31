#include<stdio.h>
int main()
{
     //Question 04//ok

   float radius;
    printf("\n\n ENTER THE REDIUS OF A CIRCLE =");
    scanf("%f",&radius);
    printf("\nCIRCLE DIAMETER is = %.2f",2*radius);
    printf("\nCIRCLE Circumference is = %.2f",2*3.14159*radius);
    printf("\nCIRCLE AREA IS = %.2f",(radius*radius)*3.14159);
}