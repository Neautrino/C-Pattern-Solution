#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    space = n - 1;

    // Upper part of the diamond
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= space; j++)
            printf(" ");
        space--;

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    // Lower part of the diamond
    space = 1;

    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= space; j++)
            printf(" ");
        space++;

        for (j = 1; j <= 2 * (n - i) - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
