#include<stdio.h>
main()
{
	int marks;
	
	printf("enter the marks");
	scanf("%d",&marks);
	
	if(marks>90)
		printf("grade A");
	else if(marks<=90 && marks>70)
		printf("grade B");
	else if(marks<=70 && marks>50)
		printf("gread C");
	else if(marks<=50 && marks>33)
		printf("gread D");
	else
		printf("fail");
}
