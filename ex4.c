// to find the largest among all elements of a matrix
#include <stdio.h>

#define MAX 10  // maximum size for rows and columns

int main() {
    int m, n;
    int matrix[MAX][MAX];
    int max, rowPos = 0, colPos = 0;

    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Assume first element is the largest initially
    max = matrix[0][0];

    // Find largest element and its position
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                rowPos = i;
                colPos = j;
            }
        }
    }

    // Display matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display result
    printf("\nLargest element is %d at position [%d][%d]\n", max, rowPos + 1, colPos + 1);

    return 0;
}
