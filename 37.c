/*
Date : 07/01/2021
Problem Definition : 37. Write a C program to compare content of two given files. Display appropriate message.
*/
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
void compareFiles(FILE *fp1, FILE *fp2) 
{ 
	char ch1 = getc(fp1); 
	char ch2 = getc(fp2); 
	int error = 0, pos = 0, line = 1; 
	while (ch1 != EOF && ch2 != EOF) 
	{ 
		pos++; 
		if (ch1 == '\n' && ch2 == '\n') 
		{ 
			line++; 
			pos = 0; 
		} 
		if (ch1 != ch2) 
		{ 
			error++; 
		} 
		ch1 = getc(fp1); 
		ch2 = getc(fp2); 
	}
    if(error > 0)
        {
            printf("Contents are not same");
        }
        else
        {
            printf("Contents are same");
        }      
} 
int main() 
{ 
	// opening both file in read only mode 
	FILE *fp1 = fopen("file1.txt", "r"); 
	FILE *fp2 = fopen("file2.txt", "r"); 

	if (fp1 == NULL || fp2 == NULL) 
	{ 
	printf("Error : Files not open"); 
	exit(0); 
	} 
	compareFiles(fp1, fp2); 
	fclose(fp1); 
	fclose(fp2); 
	return 0; 
} 
/* Program Output 
Contents of file 1: hello
Contents of file 2: hello
Contents are same
*/
