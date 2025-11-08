#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int temp[100];

    // Input size of array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of rotations
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);

    // Handle cases where k > n
    k = k % n;

    // Copy last k elements to temp
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the remaining elements to the right
    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy temp elements to the front
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Display rotated array
    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
