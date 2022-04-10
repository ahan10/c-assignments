/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 19. Accept a number N from the user and print the first N elements of the Fibonacci series.
*/
#include <stdio.h>
void FibonacciNumbers(int termNumber)
{
    int f1 = 0, f2 = 1, next;
    if (termNumber < 1)
        return;
    printf("%d ", f1);
    for (int i = 1; i < termNumber; i++) {
        printf("%d ", f2);
        next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
int main()
{
    int seriesNumber;
    printf("Enter the number of terms: ");
    scanf("%d", &seriesNumber);
    FibonacciNumbers(seriesNumber);
    return 0;
}
/* Program Output 
Enter the number of terms: 7
0 1 1 2 3 5 8
*/