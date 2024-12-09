/*o Write a C program that calculates the factorial of a number using a function.
Include function declaration, definition, and call.*/

#include<stdio.h>

int fact(int);

main()
{
	int n;
	printf("enter the n");
	scanf("%d",&n);
	int ans=fact(n);
	printf("%d",ans);
	
}

int fact(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

