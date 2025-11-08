#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, i, j, sum = 0;

    // Input size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Input elements of the matrix
    printf("Enter elements of the matrix (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Display the result
    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
