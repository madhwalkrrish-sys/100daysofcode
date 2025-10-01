#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4.0 * i - 1);
    }

    printf("Sum of the series up to %d terms = %.6f\n", n, sum);

    return 0;
}
