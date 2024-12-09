/*? Write a C program that accepts 10 integers from the user and stores them in an array. The
program should then find and print the maximum and minimum values in the array.
? Challenge: Extend the program to sort the array in ascending order.*/

#include<stdio.h>
main()
{
	int n,i,arr[20],j,temp,max=0,min=arr[0];
	
	printf("enter the n value:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	printf("\nenter the element[%d]:",i);
	scanf("%d",&arr[i]);
	}	
	printf("\nbefore shorting");
	for(i=0;i<n;i++)
	{
		printf("\n[%d]%d",i,arr[i]);
	}

	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\n---------------------------------\n");
	printf("\nmax:%d",max);

	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\n---------------------------------\n");
	printf("\nmin:%d",min);
	printf("\n------------------------------------\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nafter shorting");
	for(i=0;i<n;i++)
	{
		printf("\n[%d]%d",i,arr[i]);
	}
}

