#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Step 1: Build prefix product into answer[]
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Step 2: Multiply with suffix product
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    // Print output array
    printf("Product array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
