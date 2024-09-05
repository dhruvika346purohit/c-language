//Write a Program to print the factorial of number N using a for loop.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,fact=1;
	printf("the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d",n,fact);
}
