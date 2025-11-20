#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_sum = arr[0];   // track overall best
    int current_sum = arr[0];  // running sum

    for(int i = 1; i < n; i++) {
        // Either extend current subarray or start a new one
        if(current_sum + arr[i] > arr[i])
            current_sum += arr[i];
        else
            current_sum = arr[i];

        // Update global max
        if(current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("Maximum Subarray Sum = %d", max_sum);

    return 0;
}
