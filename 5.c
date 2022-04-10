/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 5. Write a C program to check whether a person is eligible to vote or not.
*/
#include<stdio.h>
void main()
{
    int personAge;
    printf("Enter age: ");
    scanf("%d", &personAge);
    if(personAge >= 18)
    {
        printf("Person is eligible to vote");
    }
    else
    {
        printf("Not eligible to vote");
    }
}
/* Program Output
Enter age: 15
Not eligible to vote
 */