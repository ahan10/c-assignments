/*
Date : 07/01/2021
Problem Definition : 14. Write a program to check whether a character is uppercase or lowercase alphabet.
*/
#include<stdio.h>
int main()
{
    char checkCase;
    printf("Enter character to check for: ");
    scanf("%c", &checkCase);
    if(checkCase >= 'A' && checkCase <='Z')
    {
        printf("Is uppercase");
    }
    else
    {
        printf("Is lowercase");
    }
    return 0;
}
/* Program Output 
Enter character to check for: h
Is lowercase
*/
