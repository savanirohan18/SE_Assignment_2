// Write a C program that calculates the factorial of a given number using a function.

#include<stdio.h>

int factorial(int);

main()
{
	int n;
	
	printf("enter the n:");
	scanf("%d",&n);
	
	int ans=factorial(n);
	printf("%d",ans);
}

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*(factorial(n-1));
	}
}
