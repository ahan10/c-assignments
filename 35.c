/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 35. Write a C program to copy content of source.txt file into destination.txt file. Create source.txt file containing your roll-no and name.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
    {
        FILE *source, *destination;
        char ch;
        source = fopen("source.txt","r");
        if(source==NULL)
        {
            printf("File error!");
            exit(1);
        }
        destination = fopen("destination.txt","w");
        if(source==NULL)
        {
            printf("File error!");
            exit(1);
        }
        do
        {
            ch = fgetc(source);
            fputc(ch, destination);
        }while(ch!=EOF);
        fclose(source);
        fclose(destination);
        printf("Program completed open destination.txt to view copied content.");
        return 0;
    }
/* Program Output 
Program completed open destination.txt to view copied content.
*/