/* Write a C program that takes a string from the user and counts the number of vowels and
consonants in the string.*/

#include <stdio.h>

main() {
    char str[100];
    int v_count = 0;
    int c_count = 0;
	int i;
	
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
	{
        char ch =(str[i]);
        if (ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
            v_count++;
        } 
		else if (ch >= 'a' && ch <= 'z')
		{
            c_count++;
        }
    }

    printf("vowels: %d\n", v_count);
    printf("consonants: %d\n", c_count);
}
