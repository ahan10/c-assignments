/*
Date : 07/01/2021
Problem Definition : 10. Write a C program to input 3 numbers from user and print the maximum among them.
*/
#include<stdio.h>
int main()
{
    int numberOne, numberTwo, numberThree, maximumNumber;
    printf("Enter number 1: ");
    scanf("%d", &numberOne);
    printf("Enter number 2: ");
    scanf("%d", &numberTwo);
    printf("Enter number 3: ");
    scanf("%d", &numberThree);
    maximumNumber = numberOne;
    if(maximumNumber < numberTwo)
    {
        maximumNumber = numberTwo;
    }
    if( maximumNumber < numberThree)
    {
        maximumNumber = numberThree;
    }
    printf("The largest amoung %d, %d, %d is %d", numberOne, numberTwo, numberThree, maximumNumber);
    return 0;
}
/* Program Output 
Enter number 1: 156
Enter number 2: 45
Enter number 3: 20
The largest amoung 156, 45, 20 is 156
*/
