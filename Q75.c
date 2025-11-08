#include <stdio.h>

int main() {
    int A[10][10], B[10][10], Sum[10][10];
    int rows, cols, i, j;

    // Input number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input elements of first matrix
    printf("Enter elements of first matrix (%d x %d):\n", rows, cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix (%d x %d):\n", rows, cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add two matrices
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display the result
    printf("\nSum of the two matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
