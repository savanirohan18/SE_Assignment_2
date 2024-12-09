/* Write a C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.
 Challenge: Modify the program to also find the average of the numbers.*/
 
#include<stdio.h>

main()
{
	int arr[20],n,i;
	float avg,sum=0;
	
	printf("ente the value n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("enter the element[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		printf("\n[%d]%d",i,arr[i]);
		sum=sum+arr[i];
		avg=sum/n;
	}
	printf("\nsum:%.2f",sum);
	printf("\navg:%.2f",avg);

}

