#include<stdio.h>
main()
{
//	int n;
//	
//	printf("enter the n value:");
//	scanf("%d",&n);
//	
//	if(n%2==0)
//		printf("even");
//	else
//		printf("odd");

//	int n;
//	
//	printf("enter the n value:");
//	scanf("%d",&n);
//	
//	if(n>0)
//		printf("possitive");
//	else if(n<0)
//		printf("nagative");
//	else
//		printf("zero");
//	


	int n;
	
	printf("enter the n value:");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0)
		printf("%d divisible by 3 and 5",n);
	else
		printf("%d not divisible by 3 and 5",n);
}
