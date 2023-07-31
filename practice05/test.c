#include <stdio.h>
#include <math.h>

int main() {
    int no, digits = 0, temp,remainder;
    float re;
    printf("Enter the number: ");
    scanf("%d", &no);
    temp = no;

    while (no != 0) {
        digits++;
        no = no / 10;
    }

    no = temp; 

    while (no != 0) {
        remainder = no % 10;
      re = re + pow(remainder, digits);
        no = no / 10;
    }

    if (temp == re)
        printf("%d is an Armstrong number.\n", temp);
    else
        printf("%d is not an Armstrong number.\n", temp);
}

