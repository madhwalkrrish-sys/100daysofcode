#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, secondLargest;

    // Input array size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Validate size
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    if (arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Traverse array
    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("The second largest element is: %d\n", secondLargest);

    return 0;
}
