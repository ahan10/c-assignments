/*
Date : 07/01/2021
Problem Definition : 26. Write a C program to check Identity Matrix.
*/
#include <stdio.h>
void main()
{
    int arr1[10][10];
    int r1,c1;
    int i, j, yn =1;
   
    printf("\n\nCheck whether a given matrix is an identity matrix :\n");
    printf("Input number of Rows for the matrix :");
    scanf("%d", &r1);
    printf("Input number of Columns for the matrix :");
    scanf("%d",&c1);   
	printf("Input elements in the first matrix :\n");
       for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }    
 	 printf("The matrix is :\n");
	 for(i=0;i<r1;i++)
	 {
	   for(j=0;j<c1 ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }
    for(i=0; i<r1; i++)
    {
     for(j=0; j<c1; j++)
     {
	 if(arr1[i][j] != 1 && arr1[j][i] !=0)
	 {
	   yn = 0;
	   break;
	 }
	}
   }
   if(yn == 1 )
	printf(" The matrix is an identity matrix.\n\n");
   else
	printf(" The matrix is not an identity matrix.\n\n");
}
/* Program Output 
Check whether a given matrix is an identity matrix :
Input number of Rows for the matrix :3
Input number of Columns for the matrix :3
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 0
element - [0],[2] : 0
element - [1],[0] : 0
element - [1],[1] : 10
element - [1],[2] : 0
element - [2],[0] : 10
element - [2],[1] : 0
element - [2],[2] : 0
The matrix is :
   1   0   0
   0  10   0
  10   0   0
 The matrix is not an identity matrix.
*/
