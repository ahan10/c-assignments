/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 24. Write a program to print following patterns.
*/
#include<stdio.h>
int main()
{
    printf("1.\n");
    int initialCharacter =65;
    for (int i = 0; i<4; i++)
    {
        for (int j = 1; j <= i+1 ; j++)
        {
            printf("%c ", initialCharacter);
        }
        initialCharacter++;
        printf("\n");
    }
    printf("\n2.\n");
    int i, j, rows = 4, stars, spaces;
    stars = 1;
    spaces = rows - 1;
    
    /* Iterate through rows */
    for(i=1; i<rows*2; i++)
    {
        /* Print spaces */
        for(j=1; j<=spaces; j++)
            printf(" ");
        
        /* Print stars */
        for(j=1; j<stars*2; j++)
            printf("*");
        
        /* Move to next line */
        printf("\n");
        
        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }
    printf("\n3.\n");
    int k,n = 5,l;
        for(k=1;k<=n;k++)
        {
            for(l=1;l<=n-k;l++)
            {
                printf(" ");
            }
            for(l=1;l<=k;l++)
            {
                printf("%c",(char)(l+64));
            }
            for(l=k-1;l>=1;l--)
            {
                printf("%c",(char)(l+64));
            }
            printf("\n");
        }
}
/* Program Output 
1.
A
B B
C C C
D D D D

2.
   *
  ***
 *****
*******
 *****
  ***
   *

3.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/