#include <stdio.h>

int pivotIndex(int arr[], int n) {
    int totalSum = 0;

    // Calculate total sum of the array
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    int leftSum = 0;

    // Traverse array and check pivot condition
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
            return i;   // leftmost pivot found

        leftSum += arr[i];
    }

    return -1;  // no pivot index
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pivot = pivotIndex(arr, n);
    printf("%d\n", pivot);

    return 0;
}
