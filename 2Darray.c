#include <stdio.h>

int main() {

    int table[2][10];

    // Store table of 2 and 3
    for (int i = 0; i < 10; i++) {
        table[0][i] = 2 * (i + 1);
        table[1][i] = 3 * (i + 1);
    }

    // Print table
    printf("Table of 2:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", table[0][i]);
    }

    printf("\n\nTable of 3:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", table[1][i]);
    }

    return 0;
}