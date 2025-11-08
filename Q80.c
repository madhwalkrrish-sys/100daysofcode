#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q, i, j, k;

    // Input order of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    // Input order of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    // Check matrix multiplication condition
    if (n != p) {
        printf("Matrix multiplication not possible! (Columns of A ≠ Rows of B)\n");
        return 0;
    }

    // Input elements of first matrix
    printf("Enter elements of first matrix (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix with zeros
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the result
    printf("\nResultant Matrix (A × B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
