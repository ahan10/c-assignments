/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 8. Write a C program to make a Simple Calculator.
*/
#include<stdio.h>
int main()
{
    int choice;
    float numberOne, numberTwo, numberSum, numberSubtract, numberProduct, numberDivide;
    printf("Enter number 1: ");
    scanf("%f", &numberOne);
    printf("Enter number 2: ");
    scanf("%f", &numberTwo);
    printf("Enter:\n1.For Addition\n2.For Subtraction(N1-N2)\n3.For Multiplcation\n4.For Division(N1/N2)\nEnter Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        numberSum = numberOne + numberTwo;
        printf("%f+%f is %f", numberOne, numberTwo, numberSum);
        break;
    case 2:
        numberSubtract = numberOne - numberTwo;
        printf("%f-%f is %f", numberOne, numberTwo, numberSubtract);
        break;
    case 3:
        numberProduct = numberOne * numberTwo;
        printf("%f*%f is %f", numberOne, numberTwo, numberProduct);
        break;
    case 4:
        numberDivide = numberOne/numberTwo;
        printf("%f/%f is %f", numberOne, numberTwo, numberDivide);
        break;
    default:
        printf("Enter a choice between 1 - 4");
        break;
    }
    return 0;
}
/* Program Output 
Enter number 1: 3.5
Enter number 2: 10
Enter:
1.For Addition
2.For Subtraction(N1-N2)
3.For Multiplcation
4.For Division(N1/N2)
Enter Choice: 4
3.500000/10.000000 is 0.350000
*/