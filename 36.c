/*
Date : 07/01/2021
Problem Definition : 36. Write a C program to count total number of vowels in a given text file.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
void main()
{
    FILE *fp;
    char ch;
    int count=0;
    fp = fopen("source.txt","r");      
    if(fp == NULL)
        {
            printf("\nCan't open file or file doesn't exist."); 
            exit(0);
        }
    while((ch = fgetc(fp))!=EOF)
        if((ch>='A') && (ch<='Z') || (ch>='a') && (ch<='z'))
            {
                if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
                    count++;
            }                   
        printf("\nTotal vowels: %d",count);          
        fclose(fp);               
        getchar();
}
/* Program Output 
Total vowels: 7
*/
