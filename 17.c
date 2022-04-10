/*
Date : 07/01/2021
Problem Definition : 17. Accept a year from the user and check whether it is leap year or not.
*/
#include<stdio.h> 
int main() 
{
    int checkYear;    
    printf("Enter a year: ");
    scanf("%d", &checkYear);
    if( (checkYear % 4 == 0 && checkYear % 100 != 0 ) || (checkYear % 400 == 0) )
    {
        printf("%d is a leap year", checkYear);
    }
    else
    {
        printf("%d is not a leap year", checkYear);
    }
    return 0;
}
/* Program Output 
Enter a year: 2020
2020 is a leap year
*/
