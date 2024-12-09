/*o Write a C program that stores 5 integers in a one-dimensional array and prints
them. Extend this to handle a two-dimensional array (3x3 matrix) and
calculate the sum of all elements.*/

//#include<stdio.h>
//
//main()
//{
//	int n,arr[20],i;
//	
//	printf("enter the n:");
//	scanf("%d",&n);
//	
//	for(i=0;i<n;i++)
//	{
//		printf("\nenter the element:[%d]",i);
//		scanf("%d",&arr[i]);
//	}
//	
//	for(i=0;i<n;i++)
//	{
//		printf("\n[%d] %d",i,arr[i]);
//	}
//}

#include<stdio.h>
main()
{
	printf("-----matrix-1-----\n");
	int r,c,arr1[3][3],arr2[3][3],sum[3][3];
			
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("enter the element:[%d][%d]",r,c);
			scanf("%d",&arr1[r][c]);
		}
	}
	printf("-----matrix-2-----\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("enter the element:[%d][%d]",r,c);
			scanf("%d",&arr2[r][c]);
		}
	}
	printf("-----matrix-1-----\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d",arr1[r][c]);
		}
		printf("\n");
	}
	printf("-----matrix-2-----\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d",arr2[r][c]);
		}
		printf("\n");
		
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			sum[r][c]=arr1[r][c]+arr2[r][c];
		}
	}
	
	printf("-----matrix-3-----\n");
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d",sum[r][c]);
		}
		printf("\n");
	}	
}
