/*
Date : 07/01/2021
Problem Definition : 25. Write a C program to print 1-D array elements in reverse order.
*/
#include<stdio.h>
int main()
{
    int reverseArray[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("The array in reverse order is: \n");
    for(int i = 9; i>=0; i--)
    {
        printf("%d ,", reverseArray[i]);
    }
    return 0;
}
/* Program Output 
The array in reverse order is: 
10 ,9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1 ,
*/
