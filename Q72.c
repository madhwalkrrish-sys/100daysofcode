#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j, sum = 0;

    // Input number of rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of all elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    // Display the sum
    printf("The sum of all elements in the matrix = %d\n", sum);

    return 0;
}
