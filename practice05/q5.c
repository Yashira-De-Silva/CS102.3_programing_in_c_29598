#include <stdio.h>

int main() {
    int number, reverseno = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    do {
        digit = number % 10;
        reverseno = reverseno * 10 + digit;
        number /= 10;
    } while (number != 0);
    
    printf("Reversed number: %d\n", reverseno);
    
    return 0;
}
