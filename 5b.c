/*
Name - Bhuvnesh Verma 
Branch - AIML
Sec - D
Roll No - 28
*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int left_diag_sum = 0;
    int right_diag_sum = 0;
    for (int i = 0; i < n; i++) {
        left_diag_sum += matrix[i][i]; // Left diagonal elements
        right_diag_sum += matrix[i][n - 1 - i]; // Right diagonal elements
    }
    printf("Sum of left diagonal elements: %d\n", left_diag_sum);
    printf("Sum of right diagonal elements: %d\n", right_diag_sum);
    return 0;
}
