#include <stdio.h>

int main() {
    char char1;
    printf("Enter a character or Number : A,B,C,a,b,c,$,*,+,/,0,1,2 = ");
    scanf(" %c", &char1);

    switch (char1) {
        case 'A':
            printf("A is = %d ",'A');
            break;
        case 'B':
            printf("B is = %d",'B');
            break;
        case 'C':
            printf("C is =%d",'C');
            break;
        case 'a':
            printf("a is= %d",'a');
            break;
        case 'b':
            printf("b is = %d ",'b');
            break;
        case 'c':
            printf("c is = %d",'c');
            break;
        case '$':
            printf("$ is = %d",'$');
            break;
        case '*':
            printf("* is = %d",'*');
            break;
        case '+':
            printf("+ is =%d",'+');
            break;
        case '/':
            printf("/ is =%d",'/');
            break;
        case '0':
            printf("0 is =%d",'0');
            break;
        case '1':
            printf("1 is =%d",'1');
            break;
        case '2':
            printf("2 is = %d",'2');
            break;
        default:
            printf("Invalid");
    }

    return 0;
}








