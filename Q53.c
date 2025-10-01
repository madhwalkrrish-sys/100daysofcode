#include <stdio.h>

int main() {
    int i, j;
    int n = 9; // Total rows (must be odd)

    int mid = n / 2 + 1; // Middle row

    // Upper half including middle
    for(i = 1; i <= mid; i++) {
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(i = mid-1; i >= 1; i--) {
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
