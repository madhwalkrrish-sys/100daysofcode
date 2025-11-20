#include <stdio.h>

int main() {
    int m, n;

    // Input sizes
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int a[m], b[n], merged[m + n];

    // Input arrays
    printf("Enter elements of first sorted array: ");
    for(int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of second sorted array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    // Merge process
    int i = 0, j = 0, k = 0;

    while(i < m && j < n) {
        if(a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    // Copy remaining elements of a[]
    while(i < m)
        merged[k++] = a[i++];

    // Copy remaining elements of b[]
    while(j < n)
        merged[k++] = b[j++];

    // Print merged array
    printf("Merged sorted array: ");
    for(int x = 0; x < m + n; x++)
        printf("%d ", merged[x]);

    return 0;
}
