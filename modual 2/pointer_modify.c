/*o Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.*/
#include<stdio.h>
main()
{
	int a=10;
	int *p=&a;
	printf("before:%d",*p);
	
	*p=20;
	printf("\nafter value:%d",*p);
}

