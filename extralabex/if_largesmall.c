/*Write a C program that takes three numbers from the user and determines:
o The largest number.
o The smallest number.
? Challenge: Solve the problem using both if-else and switch-case statements.*/

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter the a:");
	scanf("%d",&a);
	printf("enter the b:");
	scanf("%d",&b);
	printf("enter the c:");
	scanf("%d",&c);
	
	if(a>b || b>c || c>a)
		printf("large number %d");
		
		if(a<b || b<c || c<a)
			printf("small number %d");
		else
			printf("same number");
}
