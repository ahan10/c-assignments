/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 9. Write a C program to print the sum of first 10 numbers.
*/
#include<stdio.h>
int main()
{
    int numberSum = 0;
    for (int i = 1; i <= 10; i++)
    {
        numberSum = numberSum + i;
    }
    printf("Sum of first 10 numbers is: %d", numberSum);
    return 0;
}
/* Program Output 
Sum of first 10 numbers is: 55
*/