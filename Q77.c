#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j;
    int diag[10], count = 0, distinct = 1;

    // Input number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Store diagonal elements (only for square part)
    int n = (rows < cols) ? rows : cols;
    for (i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    // Check if diagonal elements are distinct
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    // Display result
    if (distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
