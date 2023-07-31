#include <stdio.h>

int main() {
    int array[10];

    printf("Enter 10 integers:\n");

    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nArray elements:\n");

    
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

   
}
