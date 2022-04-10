/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 16. Write a program to enter a number from the user and display the sum of all the digits in the number.
*/
#include<stdio.h>  
 int main()    
{    
int inputNumber, sumNumbers=0, checkNumber;    
printf("Enter a number:");    
scanf("%d",&inputNumber);    
while(inputNumber>0)    
{    
checkNumber = inputNumber%10;    
sumNumbers = sumNumbers + checkNumber;    
inputNumber = inputNumber/10;    
}    
printf("Sum is= %d", sumNumbers);    
return 0;  
}   
/* Program Output 
Enter a number:546
Sum is= 15
*/