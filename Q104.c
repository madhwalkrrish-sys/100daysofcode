#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Total sum from 1 to n
    int total = n * (n + 1) / 2;

    // We want x such that:
    // sum(1..x) == sum(x..n)
    // x*(x+1)/2 == total - (x*(x-1)/2)
    // This simplifies to: x^2 = total
    // So x = sqrt(total)

    int x = 0;
    for (int i = 1; i <= n; i++) {
        int left = i * (i + 1) / 2;      // sum from 1 to i
        int right = total - (i * (i - 1) / 2); // sum from i to n

        if (left == right) {
            x = i;
            break;
        }
    }

    if (x == 0)
        printf("-1\n");
    else
        printf("%d\n", x);

    return 0;
}
