#include<stdio.h>
main()
{
	int n,i,sum=0;
	
	printf("enter the n number:");
	scanf("%d",&n);
	
	i=n;
	while(i>=1)
	{
		sum=sum+i;
		printf("\n%d",sum);
		i--;
	}
}
