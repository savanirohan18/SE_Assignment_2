/*o Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().*/

#include<stdio.h>
main()
{
	char str1[20],str2[20],str3[40];
	
	printf("enter the first string:");
	//scanf("%s",&str1);
	gets(str1);
	
	printf("enter the scond string:");
	//scanf("%s",&str2);
	gets(str2);
	
	printf("\nstr1 length:%d",strlen(str1));
	printf("\nstr2 length:%d",strlen(str2));
	
	strcpy(str3, strcat(str1, str2));
	
	printf("\n%s",str3);
	//puts(str3);
	
	
	
}
