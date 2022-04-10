/*
Date : 07/01/2021
Problem Definition : 22. Considering three numbers provided by the user as length of sides of a triangle, first check, if the values are valid for representing the sides of a triangle 
(i.e. whether a triangle can be drawn using the given values). If the lengths of sides are valid, print the type of the triangle.
*/
#include<stdio.h>
int main()
{
    float sideOne, sideTwo, sideThree, sumSide1, sumSide2, sumSide3;
    printf("Enter side 1: ");
    scanf("%f", &sideOne);
    printf("Enter side 2: ");
    scanf("%f", &sideTwo);
    printf("Enter side 3: ");
    scanf("%f", &sideThree);
    sumSide1 = sideOne + sideTwo;
    sumSide2 = sideTwo + sideThree;
    sumSide3 = sideThree + sideOne;
    if (sumSide1 > sideThree)
    {
        if( sumSide2 > sideOne)
        {
            if(sumSide3> sideTwo)
            {
                if(sideOne == sideTwo && sideTwo == sideThree && sideThree == sideOne)
                {
                    printf("Valid Equilateral Triangle");
                }
                else if(sideOne == sideTwo || sideTwo == sideThree || sideThree == sideOne)
                {
                    printf("Valid Isosceles Triangle");
                }
                else
                {
                    printf("Valid Scalene Triangle");
                }
                
            }
        }
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}
/* Program Output 
Enter side 1: 15
Enter side 2: 15
Enter side 3: 15
Valid Equilateral Triangle
*/
