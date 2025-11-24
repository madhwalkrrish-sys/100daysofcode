#include <stdio.h>

int main() {
    int n, k;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input window size k
    scanf("%d", &k);

    int queue[n];   // To store indices of negative numbers in current window
    int front = 0, rear = -1;

    // Process first window
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            queue[++rear] = i;
        }
    }

    // For remaining windows
    for (int i = k; i <= n; i++) {

        // Print first negative in the current window
        if (front
