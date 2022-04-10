/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 39. Write a C program to accept integer values from keyboard. Transfer odd numbers to odd.txt and even numbers to even.txt. 
Display data from both the files, also display even sum and odd sum from respective files.
*/
#include<stdio.h>
#include<math.h>
void main()
{
    FILE *all,*even,*odd;
    int number,i,records, evenSum=0, oddSum =0, oddArray[100], evenArray[100], a;
    printf("INPUT THE TOTAL NUMBER OF RECORDS THAT U WANT TO ENTER: ");
    scanf("%d",& records);
    all=fopen("ANYNUMBER","w");
    for(i=1;i<=records;i++)
    {
        printf("Enter %d term ", i);
        scanf("%d",&number);
        if(number==-1)break;
        putw(number,all);
    }
    fclose(all);
    all=fopen("ANYNUMBER","r");
    even=fopen("EVENNUMBER","w");
    odd=fopen("ODDNUMBER","w");
    while((number=getw(all))!=EOF)
    {
        if(number%2==0)
        {
            putw(number,even);
        }
        else
        {
           putw(number,odd);
        }
    }
    fclose(all);
    fclose(even);
    fclose(odd);
    even=fopen("EVENNUMBER","r");
    odd=fopen("ODDNUMBER","r");
    printf("THE EVEN NUMBERS ARE");
    while((number=getw(even))!=EOF)
    {
        printf(" %4d",number);
        evenSum += number;
    }
    printf("\nTHE ODD NUMBERS ARE");
    while((number=getw(odd))!=EOF)
    {
        printf("  %4d",number);
        oddSum += number;
    }
    printf("\n Sum of odd numbers: %d", oddSum);
    printf("\n Sum of even numbers: %d", evenSum);
    fclose(even);
    fclose(odd);
}
/* Program Output 
INPUT THE TOTAL NUMBER OF RECORDS THAT U WANT TO ENTER: 5
Enter 1 term 1
Enter 2 term 2
Enter 3 term 3
Enter 4 term 4
Enter 5 term 5
THE EVEN NUMBERS ARE    2    4
THE ODD NUMBERS ARE     1     3     5
 Sum of odd numbers: 9
 Sum of even numbers: 6
*/