//? Write a C program that generates Pascal’s Triangle up to N rows using loops.

#include<stdio.h>
main()
{
	int r, c, sp;

	

	r=1;
	while(r<=5)
	{
		sp=4;
		while(sp>=r)
		{
			printf(" ");
			
			sp--;
		}
		
		c=1;
		
		while(c<=r)
		{
			printf(" *");
			c++;
		}
		
		printf("\n");
		r++;
	}
	
}
