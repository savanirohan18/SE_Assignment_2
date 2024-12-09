/*? Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.
? Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.*/

//#include<stdio.h>
//main()
//{
//	printf("-----matrix-1-----\n");
//	int r,c,arr1[2][2],arr2[2][2],sum[2][2];
//			
//	for(r=0;r<2;r++)
//	{
//		for(c=0;c<2;c++)
//		{
//			printf("enter the element:[%d][%d]",r,c);
//			scanf("%d",&arr1[r][c]);
//		}
//	}
//	printf("-----matrix-2-----\n");
//	for(r=0;r<2;r++)
//	{
//		for(c=0;c<2;c++)
//		{
//			printf("enter the element:[%d][%d]",r,c);
//			scanf("%d",&arr2[r][c]);
//		}
//	}
//	printf("-----matrix-1-----\n");
//	for(r=0;r<2;r++)
//	{
//		for(c=0;c<2;c++)
//		{
//			printf("%d",arr1[r][c]);
//		}
//		printf("\n");
//	}
//	printf("-----matrix-2-----\n");
//	for(r=0;r<2;r++)
//	{
//		for(c=0;c<2;c++)
//		{
//			printf("%d",arr2[r][c]);
//		}
//		printf("\n");
//		
//	}
//	
//	for(r=0;r<2;r++)
//	{
//		for(c=0;c<2;c++)
//		{
//			sum[r][c]=arr1[r][c]+arr2[r][c];
//		}
//	}
//	
//	printf("-----matrix-3-----\n");
//	
//	for(r=0;r<2;r++)
//	{
//		for(c=0;c<2;c++)
//		{
//			printf("%d",sum[r][c]);
//		}
//		printf("\n");
//	}	
//}


#include<stdio.h>
main()
{
	int a[3][3],b[3][3],cc[3][3],r,c,k;
	printf("\n-------matrix-1---------\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("enter the element[%d][%d]",r,c);
			scanf("%d",&a[r][c]);
		}
	}
	
	printf("\n-------matrix-2---------\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("enter the element[%d][%d]",r,c);
			scanf("%d",&b[r][c]);
		}
	}
	
	printf("\n-------matrix-1---------\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",a[r][c]);
		}
		printf("\n");
	}
	printf("\n-------matrix-2---------\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",b[r][c]);
		}
		printf("\n");
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cc[r][c]=0;
			for(k=0;k<3;k++)
			{	
				cc[r][c]=cc[r][c]+a[r][k]*b[k][c];
			}
		}
	}
	printf("\n------matrix-3-----------\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",cc[r][c]);
		}
		
		printf("\n");
	}
}

