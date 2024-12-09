// Write a C program that counts the number of words in a sentence entered by the user

#include <stdio.h>

main() {
    char str[100];
    int w_count = 0,i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
	{
        if (str[i] == ' ') 
		{
            w_count++;
        }
    }

    w_count++;
    printf("Number of words: %d\n", w_count);

}
