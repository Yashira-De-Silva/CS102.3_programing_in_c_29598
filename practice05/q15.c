#include <stdio.h>

int main() {
    int array[10];
    int evenCount = 0;

    printf("Enter 10 integers:\n");

   
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        if (array[i] % 2 == 0) {
            evenCount++;
        }
    }

    printf("\nNumber of even numbers in the array: %d\n", evenCount);

    
}
