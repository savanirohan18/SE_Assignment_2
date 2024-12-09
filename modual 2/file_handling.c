/*o Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents.*/


#include <stdio.h>


void main() {
    FILE *fp;
	
	fp=fopen("file.txt", "w");
    
    
    if (fp == NULL) 
	{
        printf("Could not open file\n");
  	}

    char *str = "This is my file created by C. in exeption hadling.";
    fputs(str, fp);

    fclose(fp);

    fp = fopen("file.txt", "r");
    if (fp == NULL)
	{
        printf("Could not open file\n");
    }

    char data[100];
    while (fgets(data, 100, fp) != NULL) {
        printf("%s", data);
    }

    fclose(fp);
}

