/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 12. Create a converter that will convert a distance in meters to feet and inches.
*/
#include<stdio.h>
int main()
{
    float lengthMeter, lengthFeet, lengthInch;
    printf("Enter length in meters: ");
    scanf("%f", &lengthMeter);
    lengthFeet = lengthMeter * 3.281;
    lengthInch = lengthFeet * 12;
    printf("%f meter is %f feet", lengthMeter, lengthFeet);
    printf("\n%f meter in inches is %f inches", lengthMeter, lengthInch);
    return 0;
}
/* Program Output 
Enter length in meters: 5
5.000000 meter is 16.405001 feet
5.000000 meter in inches is 196.860016 inches
*/