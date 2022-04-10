/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 1. Write a C program to read and print your name and address
*/
#include<stdio.h>
int main()
{
    char studentName[20], homeAddress[50];
    printf("Enter name: ");
    gets(studentName);
    printf("Enter Address: ");
    gets(homeAddress);
    printf("Name is: %s", studentName);
    printf("\nAddress is: %s", homeAddress);
    return 0;
}
/* Program Output 
Enter name: Ahan Bhargava
Enter Address: Hno. XYZ, Sector 1, Gandhinagar, Gujarat
Name is: Ahan Bhargava
Address is: Hno. XYZ, Sector 1, Gandhinagar, Gujarat
*/