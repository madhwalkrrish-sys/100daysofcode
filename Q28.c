#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // use long long to handle large results

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    if (n < 2)
        printf("No even numbers in the range 1 to %d\n", n);
    else
        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}
