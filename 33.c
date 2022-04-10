/*
Date : 07/01/2021
Problem Definition : 33. Write a C function to check whether strings are same or not. The function should take two string arguments to be compared.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char stringOne[20], stringTwo[20];
    int counterValue;
    printf("Enter string 1: ");
    scanf("%s", stringOne);
    getchar();
    printf("Enter string 2: ");
    scanf("%s", stringTwo);
    counterValue = strcmp(stringOne,stringTwo);
    if(counterValue == 0)
    {
        printf("Same strings");
    }
    else
    {
        printf("Different strings");
    }
    return 0;
}
/* Program Output 
Enter string 1: hello
Enter string 2: hello
Same strings
*/
