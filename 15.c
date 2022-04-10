/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 15. Write a program to accept two numbers and one mathematical operator. Using given mathematical operator.
*/
#include<stdio.h>
int main()
{
    float numberOne, numberTwo, numberSum, numberSubtract, numberMultiply, numberDivide;
    char mathOperator;
    printf("Enter number 1: ");
    scanf("%f", &numberOne);
    getchar();
    printf("Enter:\n+ For Addition\n- For Subtraction\n* For Multiplication\n/ For Division\nEnter Choice: ");
    scanf("%c", &mathOperator);
    printf("Enter number 2: ");
    scanf("%f", &numberTwo);
    switch (mathOperator)
    {
    case '+':
        numberSum = numberOne + numberTwo;
        printf("%f %c %f = %f", numberOne, mathOperator, numberTwo, numberSum);
        break;
    case '-':
        numberSubtract = numberOne - numberTwo;
        printf("%f %c %f = %f", numberOne, mathOperator, numberTwo, numberSubtract);
        break;
    case '*':
        numberMultiply = numberOne + numberTwo;
        printf("%f %c %f = %f", numberOne, mathOperator, numberTwo, numberMultiply);
        break;
    case '/':
        numberDivide = numberOne / numberTwo;
        printf("%f %c %f = %f", numberOne, mathOperator, numberTwo, numberDivide);
        break;    
    default:
        printf("Choose from +, -, *, /");
        break;
    }
    return 0;
}
/* Program Output 
Enter number 1: 51
Enter:
+ For Addition
- For Subtraction
* For Multiplication
/ For Division
Enter Choice: +
Enter number 2: 4
51.000000 + 4.000000 = 55.000000
*/