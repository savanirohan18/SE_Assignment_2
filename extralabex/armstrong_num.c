//? Write a C program that checks whether a given number is an Armstrong number or not 

#include<stdio.h>
main()
{
	int n,num,sum=0,rem;
	
	printf("enter the value n:");
	scanf("%d",&n);
	
	num=n;
	
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	
	if(num==sum)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not armstrong number");
	}
}
