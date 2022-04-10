/*
Date : 07/01/2021
Problem Definition : 11. Write a program to find the sum of odd numbers and even numbers from 1 to N, N entered by the user.
*/
#include<stdio.h>
int main()
{
    int lastNumber, sumOdd = 0, sumEven = 0;
    printf("Enter the last digit in the series: ");
    scanf("%d", &lastNumber);
    for (int i = 1; i <= lastNumber; i++)
    {
        if(i%2==0)
        {
            sumEven = sumEven + i;
        }
        else
        {
            sumOdd = sumOdd + i;
        }
        
    }
    printf("The sum of even numbers is %d\nThe sum of odd numbers is %d", sumEven, sumOdd);
    return 0;
}
/* Program Output 
Enter the last digit in the series: 10
The sum of even numbers is 30
The sum of odd numbers is 25
*/
