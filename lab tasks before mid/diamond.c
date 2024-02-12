#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter the number of rows (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }

    // Upper half of the diamond
    for (i = 1; i <= n; i += 2) {
        for (space = 1; space <= (n - i) / 2; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = n - 2; i >= 1; i -= 2) {
        for (space = 1; space <= (n - i) / 2; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
