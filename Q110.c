#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid k\n");
        return 0;
    }

    // Loop through each window
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        // Find max in the current window [i .. i+k-1]
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }

        printf("%d", max);
        if (i < n - k)
            printf(" ");
    }

    printf("\n");
    return 0;
}
