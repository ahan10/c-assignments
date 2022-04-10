/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 31. Write a C program to find Maximum, Minimum and Average value from the given integer array.
*/
#include<stdio.h>
int main()
{
    int arrayOne[100], maxValue, minValue, n, sumValue = 0;
    float avgValue=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        printf("Enter %d term: ", i+1);
        scanf("%d", &arrayOne[i]);
    }
    maxValue = arrayOne[0];
    for(int j = 1; j<n; j++)
    {
        if(arrayOne[j] > maxValue)
        {
            maxValue = arrayOne[j];
        }
    }
    minValue = arrayOne[0];
    for(int k = 1; k<n; k++)
    {
        if(arrayOne[k] < minValue)
        {
            minValue = arrayOne[k];
        }
    }
    for(int l = 0; l<n; l++)
    {
        sumValue = sumValue + arrayOne[l];
    }
    avgValue = sumValue/n;
    printf("Maximum: %d", maxValue);
    printf("\nMinimum: %d", minValue);
    printf("\nAverage: %f", avgValue);
    return 0;
}
/* Program Output 
Enter the number of terms: 5
Enter 1 term: 1
Enter 2 term: 2
Enter 3 term: 3
Enter 4 term: 4
Enter 5 term: 5
Maximum: 5
Minimum: 1
Average: 3.000000*/