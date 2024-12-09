/*Write a C program that checks whether a given number is a prime number or not using a
for loop.
Challenge: Modify the program to print all prime numbers between 1 and a given number.*/
#include<stdio.h>
int prime();
main()
{
	int num=prime();
	printf("\n\n\t %d",num);
}
int prime()
{
	int num , i ;
	printf("\n\n\t Enter any Number = ");
	scanf("%d",&num);
	
    if(num<=1) 
	{
		printf("Number is not prime.\n");
    }
	for(i=2;i*i<=num;i++) 
	{
        if (num%i==0) 
		{
            printf("Number is not prime.\n"); 
        }
    
        else
        {
        	 printf("Number is prime\n"); 
		}
	}
		return num;
}
