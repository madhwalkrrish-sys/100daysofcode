#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Next Greater Elements:\n");

    for (int i = 0; i < n; i++) {
        int nextGreater = -1;

        // Search for next greater element on the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        // Print result in comma-separated form
        printf("%d", nextGreater);

        if (i < n - 1)  // add comma except after last element
            printf(", ");
    }

    printf("\n");
    return 0;
}
