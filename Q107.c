#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Previous Greater Elements:\n");

    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Search on the left side for previous greater element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; // nearest greater on the left found
            }
        }

        // Print in comma-separated format
        printf("%d", prevGreater);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
