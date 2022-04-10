/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 3. Write a C program to read a month number and print corresponding month name.
*/
#include<stdio.h>
int main()
{
    int monthNumber;
    printf("Enter month number: ");
    scanf("%d", &monthNumber);
    if (monthNumber==1)
    {
        printf("January");
    }
    if (monthNumber==2)
    {
        printf("February");
    }
    if (monthNumber==3)
    {
        printf("March");
    }
    if (monthNumber==4)
    {
        printf("April");
    }
    if (monthNumber==5)
    {
        printf("May");
    }
    if (monthNumber==6)
    {
        printf("June");
    }
    if (monthNumber==7)
    {
        printf("July");
    }
    if (monthNumber==8)
    {
        printf("August");
    }
    if (monthNumber==9)
    {
        printf("September");
    }
    if (monthNumber==10)
    {
        printf("October");
    }
    if (monthNumber==11)
    {
        printf("November");
    }
    if (monthNumber==12)
    {
        printf("December");
    }
    if (monthNumber<1 && monthNumber>12)
    {
        printf("Enter between 1 and 12");
    }
    return 0;
}
/* Program Output 
Enter month number: 5
May
*/