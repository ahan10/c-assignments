/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 2. Write a C program to check whether a given number is divisible by 7 or not.
*/
#include<stdio.h>
int main()
{
    int checkNumber;
    printf("Enter number to check for: ");
    scanf("%d", &checkNumber);
    if(checkNumber%7==0)
    {
        printf("%d is divisible by 7",checkNumber);
    }
    else
    {
        printf("%d is not divisible by 7",checkNumber);
    }
    return 0;
}
/* Program Output 
Enter number to check for: 30
30 is not divisible by 7
*/