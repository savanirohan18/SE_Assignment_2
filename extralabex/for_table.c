#include<stdio.h>
main()
{
	int n,i;
	
	printf("enter n value");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",n,i,n*i);
	}
}
