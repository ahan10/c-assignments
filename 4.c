/*
Date : 07/01/2021
Problem Definition : 4. Write a C program to input angles of a triangle and check whether triangle is valid or not.
*/
#include<stdio.h>
int main()
{
    int angleOne, angleTwo, angleThree, sum = 0;
    printf("Enter angle one: ");
    scanf("%d", &angleOne);
    printf("Enter angle two: ");
    scanf("%d", &angleTwo);
    printf("Enter angle three: ");
    scanf("%d", &angleThree);
    sum = angleOne + angleTwo + angleThree;
    if(sum==180)
    {
        printf("It is a valid triangle.");
    }
    else
    {
        printf("It isn't a valid triangle.");
    }
    return 0;
}
/* Program Output 
Enter angle one: 60
Enter angle two: 60
Enter angle three: 60
It is a valid triangle.
*/
