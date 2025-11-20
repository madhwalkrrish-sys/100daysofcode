#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    int queue[n];  // to store indices of negative numbers
    int front = 0, rear = 0;

    // Process first window
    for(int i = 0; i < k; i++) {
        if(arr[i] < 0)
            queue[rear++] = i;
    }

    // Print result for first window
    if(front < rear)
        printf("%d ", arr[queue[front]]);
    else
        printf("0 ");

    // Process rest of the windows
    for(int i = k; i < n; i++) {

        // Remove elements out of this window
        while(front < rear && queue[front] <= i - k)
            front++;

        // Add new element if negative
        if(arr[i] < 0)
            queue[rear++] = i;

        // Print result for current window
        if(front < rear)
            printf("%d ", arr[queue[front]]);
        else
            printf("0 ");
    }

    return 0;
}
