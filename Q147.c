#include <stdio.h>

int sumArray(int arr[], int n)
{
    if (n == 0)
        return 0;   // base condition
    else
        return arr[n-1] + sumArray(arr, n-1);
}

int main()
{
    int arr[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum of array elements = %d", sumArray(arr, n));

    return 0;
}
