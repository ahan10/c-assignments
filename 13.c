/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 13. Write a program to read a character from the user and check whether it is a vowel.
*/
#include<stdio.h>
int main()
{
    char inputCharacter;
    printf("Enter the character to check for: ");
    scanf("%c", &inputCharacter);
    if(inputCharacter == 'A' || inputCharacter == 'E' || inputCharacter == 'I' || inputCharacter == 'O' || inputCharacter == 'U' || inputCharacter == 'a' || inputCharacter == 'e' || inputCharacter == 'i' || inputCharacter == 'o' || inputCharacter == 'u')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not a vowel");
    }
    return 0;
}
/* Program Output 
Enter the character to check for: d
It is not a vowel
*/