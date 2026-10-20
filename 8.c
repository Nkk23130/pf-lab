#include <stdio.h>

int main() {

    // 1. Star Pattern
    printf("1. Star Pattern\n");

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");


    // 2. Number Pattern
    printf("2. Number Pattern\n");

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");


    // 3. Alphabet Pattern
    printf("3. Alphabet Pattern\n");

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    printf("\n");


    // 4. Odd Star Pattern
    printf("4. Odd Star Pattern\n");

    for (int i = 1; i <= 9; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");


    // 5. Odd Number Pattern
    printf("5. Odd Number Pattern\n");

    for (int i = 1; i <= 9; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");


    // 6. Odd Alphabet Pattern
    printf("6. Odd Alphabet Pattern\n");

    for (int i = 1; i <= 9; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}