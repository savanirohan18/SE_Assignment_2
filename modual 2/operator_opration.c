#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("enter the two number : ");
	scanf("%d %d",&a,&b);
	printf("enter the two number : ");
	scanf("%d %d",&c,&d);
	
	//arithmatic
	printf("\n\n\t addition :%d",a+b);
	printf("\n\n\t substrction :%d",a-b);
	printf("\n\n\t multiplication :%d",a*b);
	printf("\n\n\t division :%d",a/b);
	printf("\n\n\t modual :%d",a%b);
	//relational
	printf("\n\n\t greterthen :%d",a>b);
	printf("\n\n\t lessthen :%d",a<b);
	printf("\n\n\t double equal :%d",a==b);
	printf("\n\n\t not equal :%d",a!=b);
	//logical
	
	if(a==b&&b==c&&c==d&&d==a)
		{
			printf("\n\tsame");
		}
	else
		{
			printf("\n\tdiffrent");
		}
		
	if(a==b||b==c||c==d||d==a)
		{
			printf("\n\tsame");
		}
	else
		{
			printf("\n\tdiffrent");
		}
		
		
	if(  !(a==b))
			printf("\n\t diffrent");
	else
			printf("\n\t same");
	
	
}

