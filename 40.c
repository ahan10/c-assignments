/*
Date : 07/01/2021
Problem Definition : 40. Write a C program to accept file names from command line arguments. 
Create a file copy program using command line argument. (eg. mycopy mango.txt apple.txt) Here the content of mango.txt must be copied to apple.txt.
*/
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    FILE *fptr1,*fptr2;
    int i;
    char ch;
    printf("Total number of argument passed: %d\n", argc);
    if( (fptr1 = fopen(argv[1], "r") ) == NULL ) 
    {
        printf("Error...\nCannot open file: %s\n", argv[1]);
        printf("Either the filename is incorrect or it does not exists.\n");
        return -1;
    }
    if( (fptr2 = fopen(argv[2], "r") ) != NULL) 
    {
        printf("Warning: File %s already exists.\n", argv[2]);
        printf("Press Y to overwrite. Or any other key to exit: ");
        ch = getchar();
    if(ch != 'Y' && ch != 'y') 
    {
        printf("Terminating the copy process.\n");
        fclose(fptr1);
        fclose(fptr2);
        return -1;
    }
    else 
    {
        fclose(fptr2);
        fptr2 = fopen(argv[2], "w");
    }
    }
    else 
    {
        fptr2 = fopen(argv[2], "w");
    }
    while( !feof(fptr1) ) 
    {
        ch = getc(fptr1);
        if(ch != EOF) 
        {
            putc(ch, fptr2);
        }
    }
    fclose(fptr1);
    fclose(fptr2);
    printf("Content of %s copied to %s\n", argv[1], argv[2]);
  return 0;
}
/* Program Output 
In command prompt:
E:\C Assignment>gcc 40.c -0 40
E:\C Assignment>40 text1.txt text3.txt
Total number of argument passed: 3
Content of text1.txt coped to text3.txt
content of text1.txt:hello
content of text3.txt after copying:hello
*/
