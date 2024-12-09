/*? Write a C program that takes a number as input and checks whether it is a palindrome using
a function.*/

#include<stdio.h>

int palidrome(int );

main()
{
	int n;
	printf("enter the n:");
	scanf("%d",&n);		
	
	palidrome(n);
}

int palidrome(int n)
{
	int ans,rem,sum=0;
	
	ans=n;
	
	while(n>0)
	{
		rem=n%10;
		sum=rem+(sum*10);
		n=n/10;
	}
	
	if(ans==sum)
	{
		printf("palidrom");
	}
	else
	{
		printf("not plidrom");
	}
	
}
