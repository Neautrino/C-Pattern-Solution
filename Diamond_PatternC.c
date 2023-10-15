#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        // Ensure the number of rows is odd for a symmetrical diamond pattern.
        printf("Please enter an odd number of rows.\n");
        return 1;
    }

    space = n / 2;

    for (i = 1; i <= n; i += 2) {
        for (j = 1; j <= space; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
        space--;
    }

    space = 1;

    for (i = n - 2; i >= 1; i -= 2) {
        for (j = 1; j <= space; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
        space++;
    }

    return 0;
}
