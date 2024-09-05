#include<stdio.h>
#include<conio.h>
void main()
{
//	Write a Program to print the sum of all numbers from 1 to N using a for loop.
	int i,n,sum=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of 1 to %d is %d",n,sum);
}
