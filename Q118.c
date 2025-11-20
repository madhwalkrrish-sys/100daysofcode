#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];  // array of size n but contains numbers from 0 to n (one missing)

    printf("Enter %d elements (0 to %d with one missing): ", n, n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - sum;

    printf("Missing number: %d", missing);

    return 0;
}
