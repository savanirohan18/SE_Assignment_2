/*Write a C program that uses the break statement to stop printing numbers
when it reaches 5. Modify the program to skip printing the number 3 using the
continue statement.*/

//break
//#include<stdio.h>
//int main()
//{
//	int i;
//	
//	for(i=0;i<10;i++)
//	{
//		if(i==6)
//			break;
//			
//		printf("\n%d",i);
//	}
//}

//continue
//#include<stdio.h>
//int main()
//{
//	int i;
//	
//	for(i=0;i<10;i++)
//	{
//		if(i==3)
//			continue;
//			
//		printf("\n%d",i);
//	}
//}

//goto
#include<stdio.h>
main()
{
	int i;
	
	i=0;
	
	abc:
		
		printf("\n%d",i);
		i++;
		
			if(i<=10)
				goto abc;
}

