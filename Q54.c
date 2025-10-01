#include <stdio.h>

int main() {
    int i, j;
    int n = 7; // Total rows (must be odd)
    int mid = (n + 1) / 2;

    // Upper half including middle
    for(i = 1; i <= mid; i++) {
        // Print spaces
        for(j = 1; j <= mid - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(i = mid-1; i >= 1; i--) {
        // Print spaces
        for(j = 1; j <= mid - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
