/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 21. Write a program that take input of 3 subjects marks out of 150. Count the percentage. Print the Grade/Class based on conditions.
*/
#include<stdio.h>
int main()
{
    float subjectOne, subjectTwo, subjectThree, subjectPercentage, subjectSum;
    printf("Enter marks for subject 1 (out of 150): ");
    scanf("%f", &subjectOne);
    printf("Enter marks for subject 2 (out of 150): ");
    scanf("%f", &subjectTwo);
    printf("Enter marks for subject 3 (out of 150): ");
    scanf("%f", &subjectThree);
    subjectSum = subjectOne + subjectTwo + subjectThree;
    subjectPercentage = (subjectSum/450)*100;
    if(subjectPercentage >= 70 && subjectPercentage <=100)
    {
        printf("DISTINCTION");
    }
    else if(subjectPercentage >= 60 && subjectPercentage <= 69)
    {
        printf("FIRST CLASS");
    }
    else if(subjectPercentage >= 50 && subjectPercentage <= 59)
    {
        printf("SECOND CLASS");
    }
    else if(subjectPercentage >= 40 && subjectPercentage <= 49)
    {
        printf("PASS CLASS");
    }
    else if(subjectPercentage >= 0 && subjectPercentage <= 39)
    {
        printf("FAIL");
    }
    else if(subjectPercentage < 0 || subjectPercentage > 100)
    {
        printf("INVALID");
    }
    return 0;
}
/* Program Output 
Enter marks for subject 1 (out of 150): 150
Enter marks for subject 2 (out of 150): 146
Enter marks for subject 3 (out of 150): 136
DISTINCTION
*/