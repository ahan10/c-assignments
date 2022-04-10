/*
Date : 07/01/2021
Problem Definition : 27. Write a C program to find sum of diagonal elements of a given 3X3 matrix.
*/
#include<stdio.h>
int main()
{
	int i,j,matrixSize,diagonalOne=0,diagonalTwo=0,a[5][5];
	printf("Enter size of square matrix: ");
	scanf("%d",&matrixSize);
	printf("Enter Elements of matrix: \n");
	for(i=0;i<matrixSize;++i)
		for(j=0;j<matrixSize;++j)
		{
			scanf("%d",&a[i][j]);
			if(i==j)
            {
                diagonalOne+=a[i][j];
            }
			if((i+j)==(matrixSize-1))
            {
                diagonalTwo+=a[i][j];
            }
		}
	printf("\nFirst Diagonal Sum=%d",diagonalOne);
	printf("\nSecond Diagonal Sum=%d",diagonalTwo);
	return 0;
}
/* Program Output 
Enter size of square matrix:2
Enter Elements of matrix:
1
2
3
4

First Diagonal Sum=5
Second Diagonal Sum=5
*/
