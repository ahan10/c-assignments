/*
Date : 07/01/2021
Problem Definition : 7. Write a C program to Convert Celsius to Fahrenheit.
*/
#include<stdio.h>
int main()
{
    int tempratureCelsius, tempratureFahrenheit;
    printf("Enter temprature in celsius: ");
    scanf("%d", &tempratureCelsius);
    tempratureFahrenheit = ((tempratureCelsius*9)/5)+32;
    printf("Temprature in Fahrenheit: %d", tempratureFahrenheit);
    return 0;
}
/* Program Output
Enter temprature in celsius: 0
Temprature in Fahrenheit: 32
 */
