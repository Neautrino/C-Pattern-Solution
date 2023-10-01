#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper part of the diamond
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower part of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
