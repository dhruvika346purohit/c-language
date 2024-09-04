//Write a Program to print even numbers from 1 to N using a do-while loop.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	printf("enter the value of n=");
	scanf("%d",&n);
	do
	{
		if(i%2==0)
		{
		printf("%d ",i);
		}
		i++;
	}while(i<=n);
	
}
