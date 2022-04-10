/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 34. Write a C function to convert given string into upper case.
*/
#include <ctype.h> 
#include <stdio.h> 
  
int main() 
{ 
    int j = 0; 
    char strUpper[] = "hello\n"; 
    char ch; 
    while (strUpper[j]) { 
        ch = strUpper[j]; 
        putchar(toupper(ch)); 
        j++; 
    } 
    return 0; 
}
/* Program Output 
HELLO
*/