/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 29. Write a C program to perform addition of two 3X3 matrices.
*/
#include <stdio.h>
int main() {
    int r, rowNumbers, c, a[3][3], b[3][3], sum[3][3], i, j;
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    printf("\nSum of two matrices: \n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j) {
            printf("%d   ", sum[i][j]);
            if (j == 2) {
                printf("\n\n");
            }
        }
    return 0;
}
/* Program Output 
Enter elements of 1st matrix:
Enter element a11: 1
Enter element a12: 2
Enter element a13: 3
Enter element a21: 4
Enter element a22: 5
Enter element a23: 6
Enter element a31: 7
Enter element a32: 8
Enter element a33: 9
Enter elements of 2nd matrix:
Enter element a11: 1
Enter element a12: 2
Enter element a13: 3 
Enter element a21: 4
Enter element a22: 5
Enter element a23: 6
Enter element a31: 7
Enter element a32: 8
Enter element a33: 9

Sum of two matrices:
2   4   6

8   10   12

14   16   18
*/