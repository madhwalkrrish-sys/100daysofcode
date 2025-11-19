#include <stdio.h>

// Function to find the first occurrence
int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            first = mid;        // possible answer
            high = mid - 1;     // search left part
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return first;
}

// Function to find the last occurrence
int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            last = mid;         // possible answer
            low = mid + 1;      // search right part
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return last;
}

int main() {
    int n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    if (first == -1)
        printf("-1 -1\n");
    else
        printf("%d %d\n", first, last);

    return 0;
}
