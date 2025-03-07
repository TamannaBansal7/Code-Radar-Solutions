#include <stdio.h>

int main() {
    int n;

    // Input
    scanf("%d", &n);

    // Loop for rows
    for (int i = 1; i <= n; i++) {
        // Loop for spaces (mirrored effect)
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Loop for stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}