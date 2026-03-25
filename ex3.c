//to display the sum of two matrices
#include <stdio.h>

#define MAX 10  // maximum size for rows and columns

// Function to input matrix elements
void inputMatrix(int matrix[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int matrix[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrix(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int m, n;
    int matrix1[MAX][MAX], matrix2[MAX][MAX], sum[MAX][MAX];

    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    printf("\nEnter elements of first matrix:\n");
    inputMatrix(matrix1, m, n);

    printf("\nEnter elements of second matrix:\n");
    inputMatrix(matrix2, m, n);

    addMatrix(matrix1, matrix2, sum, m, n);

    printf("\nFirst Matrix:\n");
    displayMatrix(matrix1, m, n);

    printf("\nSecond Matrix:\n");
    displayMatrix(matrix2, m, n);

    printf("\nSum of Matrices:\n");
    displayMatrix(sum, m, n);

    return 0;
}
