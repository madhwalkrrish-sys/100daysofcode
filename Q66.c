#include <stdio.h>

int main() {
    int arr[100], n, i, key, pos;

    // Input number of elements
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    // Input sorted array elements
    printf("Enter %d elements (in ascending order):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find position to insert
    pos = n;  // assume at end
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = key;
    n++;

    // Display new array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
