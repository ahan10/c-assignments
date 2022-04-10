/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 18. Write a program called ExtractDigits to extract each digit from an int in the reverse order.
*/
#include <stdio.h> 
int ExtractDigits(int num) 
{ 
    int rev_num = 0; 
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 
int main() 
{ 
    int reverseNumber;
    printf("Enter number to reverse: ");
    scanf("%d", &reverseNumber); 
    printf("Reverse of no. is %d", ExtractDigits(reverseNumber)); 
    getchar(); 
    return 0; 
}
/* Program Output 
Enter number to reverse: 12345
Reverse of no. is 54321
*/