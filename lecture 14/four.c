//Write a Program to print the multiplication table of the number N using any type of loop.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,mul;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		printf("%d * %d = %d\n",n,i,mul);
	}
	
}
