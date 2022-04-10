/*
Date : 07/01/2021
Problem Definition : 38. Write a C program to append content of file1 into file2.
*/
#include <stdio.h>
#include <stdlib.h> // For exit()
int main()
{
    FILE *fp1, *fp2;
    char c;
    fp1 = fopen("text1.txt", "r");
    if (fp1 == NULL)
    {
        printf("file does not exist..");
        exit(0);
    }
    fp2 = fopen("text2.txt", "a");
    if (fp2 == NULL)
    {
        printf("file does not exist...");
        exit(0);
    }
    c = fgetc(fp1);
    while (c != EOF)
    {
        fputc(c,fp2);
        c = fgetc(fp1);
    }
    printf("\nContent in appended");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
/* Program Output 
contents in text1: hello
contents in text2: world
Content in appended
new content in text2: worldhello
*/
