#include <stdio.h>

int main() {
    int arr[100], n, key;
    int low, high, mid;
    int found = 0;

    // Input number of elements
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    // Input sorted array elements
    printf("Enter %d elements (in ascending order):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Initialize pointers
    low = 0;
    high = n - 1;

    // Binary Search
    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element %d found at position %d.\n", key, mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(!found)
        printf("Element %d not found in the array.\n", key);

    return 0;
}
