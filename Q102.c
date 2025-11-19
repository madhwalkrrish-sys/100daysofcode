#include <stdio.h>

int ceilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;      // possible ceil
            high = mid - 1;    // search on left for first occurrence
        }
        else {
            low = mid + 1;     // search right part
        }
    }

    return result;
}

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    int index = ceilIndex(arr, n, x);

    printf("%d\n", index);

    return 0;
}
