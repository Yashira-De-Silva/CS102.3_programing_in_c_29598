#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, nextTerm, count = 10;

    printf("Fibonacci Series: ");

    for (int i = 1; i <= count; ++i) {
        printf("%d, ", n1);
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }

}

