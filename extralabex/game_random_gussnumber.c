/*? Write a C program that implements a simple number guessing game. The program should
generate a random number between 1 and 100, and the user should guess the number
within a limited number of attempts*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int num,usernum,i;
	
	printf("enter number between 1 tp 1000");
	srand(time(NULL));
	num=rand()%100;
	
	for(i=0;i<10;i++)
	{
		printf("\nenter the number:");
		scanf("%d",&usernum);
		
		if(usernum>num)
			printf("\nusernum is big");
		else if(usernum<num)
			printf("\nusernum is small");
		else if(usernum==num)
		{
			printf("\nyou are win");
			break;
		}
	}
	
	if(i==10)
		printf("\nyou are lose try agin");
}
