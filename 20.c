/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 20. Calculate the area of triangle given its three sides.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float sideOne, sideTwo, sideThree, sumSides, halfPerimeter, totalSum, totalArea;
    printf("Enter side 1: ");
    scanf("%f", &sideOne);
    printf("Enter side 2: ");
    scanf("%f", &sideTwo);
    printf("Enter side 3: ");
    scanf("%f", &sideThree);
    sumSides = sideOne + sideTwo + sideThree;
    halfPerimeter = sumSides/2;
    totalSum = (halfPerimeter*((halfPerimeter - sideOne)*(halfPerimeter - sideTwo)*(halfPerimeter - sideThree)));
    totalArea = sqrt(totalSum);
    printf("Area of Triangle is: %f sq", totalArea);
    return 0; 
}
/* Program Output 
Enter side 1: 15
Enter side 2: 16
Enter side 3: 17
Area of Triangle is: 109.981819 sq
*/