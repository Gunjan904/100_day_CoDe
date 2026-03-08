//to find the sum of each column in a 2-d array
#include<stdio.h>
int main(){
    int m,n;
    printf("enter the no. of rows(m):");
    scanf("%d", &m);
    printf("Enter the no. of columns(n):");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter the elements of matrix:");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Element[%d][%d]:", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix:");
    for(int i=0; i<m; i++){
        int rowsum=0;
        for(int j=0; i<n; i++){
            rowsum += arr[i][j];
        }
        printf("Row %d sum=%d \n", i+1, rowsum);
    }
    printf("Sum of each column \n");
    for(int j=0; j<n; j++){
        int colsum=0;
        for(int i=0; i<m; i++){
            colsum += arr[i][j];
        }
        printf("Column %d Sum = %d\n", j+1, colsum);
    }
   return 0;
}
