/*
Date : 07/01/2021
Problem Definition : 32. Write a C function to find length of string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char stringCheck[] = "C is a good language";
    printf("Length of string is: %lu", strlen(stringCheck));
    return 0;
}
/* Program Output 
Length of string is: 20
*/
