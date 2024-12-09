/*o Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them.*/

#include<stdio.h>

struct student
{
	char name[10];
	int rollno;
	int sub[3];
}s[3];

main()
{
	int i,si;
	
	for(si=0;si<3;si++)
	{	
		printf("\n------------[%d]-----------------\n",si+1);
		printf("\nenter the name:");
		scanf("%s",&s[si].name);
		
		printf("\nente the rollno:");
		scanf("%d",&s[si].rollno);
		
		for(i=0;i<3;i++)
		{
			printf("\nenter the element[%d]:",i);
			scanf("%d",&s[si].sub[i]);
		}
	}
	
	for(si=0;si<3;si++)
	{
		printf("\n------------[%d]-----------------\n",si+1);
		printf("\nname:%s",s[si].name);
		printf("\nrollno:%d",s[si].rollno);
		
		for(i=0;i<3;i++)
		{
			printf("\nmarks:[%d]%d",i,s[si].sub[i]);
		}
	}
	
}


