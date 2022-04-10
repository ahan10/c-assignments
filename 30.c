/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 30. Write a C program to perform multiplication of two 3X3 matrices.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], sum=0, i, j, k;
    printf("Enter first 3*3 matrix element: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter second 3*3 matrix element: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat2[i][j]);
    }
    printf("\nMultiplying two matrices...");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
                sum = sum + mat1[i][k] * mat2[k][j];
            mat3[i][j] = sum;
        }
    }
    printf("\nMultiplication result of the two given Matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d\t", mat3[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
/* Program Output 
Enter first 3*3 matrix element: 1
2
3
4
5
6
7
8
9
Enter second 3*3 matrix element: 1
2
3
4
5
6
7
8
9

Multiplying two matrices...
Multiplication result of the two given Matrix is:
30      36      42
66      81      96      
102     126     150
*/